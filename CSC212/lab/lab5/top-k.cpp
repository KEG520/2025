#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " K < data.txt\n";
        return 1;
    }

    size_t K = std::atoi(argv[1]);
    if (K <= 0) {
        std::cerr << "K must be a positive integer.\n";
        return 1;
    }

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int value;

    while (std::cin >> value) {
        if (minHeap.size() < K) {
            minHeap.push(value);
        } else if (value > minHeap.top()) {
            minHeap.pop();
            minHeap.push(value);
        }
    }

    std::vector<int> topK;
    while (!minHeap.empty()) {
        topK.push_back(minHeap.top());
        minHeap.pop();
    }

    for (const int &num : topK) {
        std::cout << num << std::endl;
    }

    return 0;
}
