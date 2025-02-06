#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;

    while (std::cin >> n) {
        if (n == 0) {
            break; // End input on n = 0
        }

        std::vector<int> first(n), scnd(n);

        // Read the first list
        for (int i = 0; i < n; i++) {
            std::cin >> first[i];
        }

        // Read the second list
        for (int i = 0; i < n; i++) {
            std::cin >> scnd[i];
        }

        // Store the original indices of the first list
        std::vector<int> original_indices(n);
        for (int i = 0; i < n; i++) {
            original_indices[i] = i;
        }

        // Sort the original indices based on the values in the first list
        std::sort(original_indices.begin(), original_indices.end(), [&first](int i, int j) {
            return first[i] < first[j];
        });

        // Sort the second list to match the sorted order of the first list
        std::vector<int> reordered_scnd(n);
        std::vector<int> sorted_scnd = scnd;
        std::sort(sorted_scnd.begin(), sorted_scnd.end());

        for (int i = 0; i < n; i++) {
            reordered_scnd[original_indices[i]] = sorted_scnd[i];
        }

        // Print the reordered second list
        for (int i = 0; i < n; i++) {
            std::cout << reordered_scnd[i] << '\n';
        }

        std::cout << '\n'; // Blank line between test cases
    }

    return 0;
}
