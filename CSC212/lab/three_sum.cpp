//Kadden Grant, William Johnson, Andres Henao
#include <iostream>
#include <cassert>

int three_sum(int *arr, int n, int target) {
    // TODO:
    // Complete the function

    int numbers = 0;

    for (int i = 0; i < n -2; i++){
        for(int j = 1 + 1; j < n -1; j++){
            for (int k = j + 1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    std::cout << "checkinsum: " << arr[i] << "  " << arr[j] << "  " << arr[k] << '\n';
                    numbers++;
                }
            }
        }
    }
}
return numbers;

