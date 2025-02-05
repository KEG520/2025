#include <iostream>
#include <vector>

int main() {
    int n;
    while (std::cin >> n) {
        if (n == 0) break;

        std::vector<int> first(n);
        std::vector<int> scnd(n);
        std::vector<int> snditr(n);

        // Input first and second lists
        for (int i = 0; i < n; i++) std::cin >> first[i];
        for (int i = 0; i < n; i++) {
            std::cin >> scnd[i];
            snditr[i] = i;  // Initialize snditr with original indices
        }

        // Bubble sort for the first list
        for (int i = 0; i < first.size() - 1; i++) {
            for (int j = 0; j < first.size() - 1 - i; j++) {
                if (first[j] > first[j + 1]) {
                    std::swap(first[j], first[j + 1]);
                }
            }
        }

        // Bubble sort for the second list while tracking indices
        for (int i = 0; i < scnd.size() - 1; i++) {
            for (int j = 0; j < scnd.size() - 1 - i; j++) {
                if (scnd[j] > scnd[j + 1]) {
                    std::swap(scnd[j], scnd[j + 1]);       // Swap values in scnd
                    std::swap(snditr[j], snditr[j + 1]);  // Swap indices in snditr
                }
            }
        }

        // Reorder the second list based on the original first list
        std::vector<int> reordered(n);
        for (int i = 0; i < n; i++) {
            reordered[i] = scnd[snditr[i]];  // Match original positions
        }

        // Output the reordered second list
        for (int i = 0; i < n; i++) {
            std::cout << reordered[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
