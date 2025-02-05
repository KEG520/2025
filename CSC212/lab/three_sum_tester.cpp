#include <cassert>

int three_sum(int *arr, int n, int target);


int main() {
    int arr1[] = {-2, 7, 11, 0};
    int arr2[] = {3, 3, 3};
    int arr3[] = {-10, -5, 0, 5, 10, -4, -3, -2, -1, 0};
    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr5[] = {-1, 0, 1, 2, -1, -4};

    // Test cases
    assert(three_sum(arr1, 4, 16) == 1);  // -2 + 7 + 11 = 16
    assert(three_sum(arr1, 4, 5) == 1);   // -2 + 7 + 0 = 5
    assert(three_sum(arr1, 4, 20) == 0);  // No such combination
    assert(three_sum(arr1, 4, 9) == 0);   // No three elements sum to 9

    assert(three_sum(arr2, 3, 9) == 1);   // 3 + 3 + 3 = 9
    assert(three_sum(arr2, 3, 6) == 0);   // Not enough elements for sum 6
    assert(three_sum(arr2, 3, 10) == 0);  // No such combination

    assert(three_sum(arr3, 10, -15) == 1); // -10 + -5 + 0 = -15
    assert(three_sum(arr3, 10, 0) == 1);   // -10 + 10 + 0 = 0
    assert(three_sum(arr3, 10, -100) == 0); // No such combination
    assert(three_sum(arr3, 10, 17) == 1);  // 10 + 5 + 2 = 17

    assert(three_sum(arr4, 10, 6) == 1);  // 1 + 2 + 3 = 6
    assert(three_sum(arr4, 10, 30) == 0); // No such combination
    assert(three_sum(arr4, 10, 27) == 1); // 8 + 9 + 10 = 27
    assert(three_sum(arr4, 10, 50) == 0); // No such combination

    
 return 0;
}
