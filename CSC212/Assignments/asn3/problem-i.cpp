#include <algorithm>
#include <iostream>
#include <deque>
#include <cmath>

void balance(std::deque<int> &l1, std::deque<int> &l2) {
    int diff = l1.size() - l2.size();
    int val;
    if (diff < 0) {
        double d = static_cast<double>(diff) / -2;
        for (int i = 0; i < std::ceil(d); i++) {
            val = l2.front();
            l2.pop_front();
            l1.push_back(val);
        }
    }
    else if (diff > 1) {
        double d = static_cast<double>(diff) / 2;
        for (int i = 0; i < std::floor(d); i++) {
            val = l1.back();
            l1.pop_back();
            l2.push_front(val);
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::deque<int> l1;
    std::deque<int> l2;
    char command[12];
    int num;
    for (int i = 0; i < n; i++) {
        std::scanf("%s %d", command, &num);
        if (command[0] == 'g') {
            if (l1.size() > static_cast<std::size_t>(num)) {
                std::cout << l1[num] << '\n';
            }
            else {
                std::cout << l2[num - l1.size()] << '\n';
            }
        }
        else if (command[5] == 'b') {
            l2.push_back(num);
            balance(l1, l2);
        }
        else if (command[5] == 'f') {
            l1.push_front(num);
            balance(l1, l2);
        }
        else {
            l1.push_back(num);
            balance(l1, l2);
        }
    }

    return 0;
}
