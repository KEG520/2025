#include <iostream>
#include <sstream>
#include <deque>
#include <string>

std::deque<int> parseList(const std::string& input) {
    std::deque<int> output;
    std::string temp;
    std::istringstream ss(input.substr(1, input.size() - 2));

    while (std::getline(ss, temp, ',')) {
        output.push_back(std::stoi(temp));
    }

    return output;
}

void printList(const std::deque<int>& elements, bool reversed) {
    std::cout << '[';
    if (!elements.empty()) {
        if (!reversed) {
            for (size_t i = 0; i < elements.size(); ++i) {
                if (i > 0) std::cout << ',';
                std::cout << elements[i];
            }
        } else {
            for (size_t i = elements.size(); i > 0; --i) {
                if (i < elements.size()) std::cout << ',';
                std::cout << elements[i - 1];
            }
        }
    }
    std::cout << "]\n";
}

int main() {
    int tc;
    std::cin >> tc;
    
    while (tc--) {
        std::string command, input;
        int numberOfElements;
        std::cin >> command >> numberOfElements >> input;

        std::deque<int> elements = parseList(input);
        bool reversed = false;

        // Process commands
        bool hasError = false;
        for (char c : command) {
            if (c == 'R') {
                reversed = !reversed;
            } else if (c == 'D') {
                if (elements.empty()) {
                    hasError = true;
                    break;
                }
                if (reversed) {
                    elements.pop_back();
                } else {
                    elements.pop_front();
                }
            }
        }

        if (hasError) {
            std::cout << "error\n";
        } else {
            printList(elements, reversed);
        }
    }
}
