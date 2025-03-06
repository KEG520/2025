#include <iostream>
#include <queue>
#include <vector>

void solve() {
    int test;
    std::cin >> test;

    while (test--) {
        int length, num;
        std::cin >> length >> num;
        length *= 100;

        std::queue<int> left, right;

        for (int i = 0; i < num; i++) {
            int carlength;
            std::string bank;
            std::cin >> carlength >> bank;

            if (bank == "left") {
                left.push(carlength);
            } else {
                right.push(carlength);
            }
        }

        int cross = 0;
        bool onleft = true;

        while (!left.empty() || !right.empty()) {
            int space = length;

            if (onleft) {
                while (!left.empty() && left.front() <= space) {
                    space -= left.front();
                    left.pop();
                }
            } else {
                while (!right.empty() && right.front() <= space) {
                    space -= right.front();
                    right.pop();
                }
            }

            onleft = !onleft; 
            cross++;
        }

        std::cout << cross << std::endl;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
    
    return 0;
}
