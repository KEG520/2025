#include <iostream>

int main(){

int n;
int t;

std::cin >> n;

std::cin >> t;


int arr[5];

for (int i = 0; i < n; i++){
    std::cin >> arr[i];
}

int total = 0;
int completed = 0;

for (int i = 0; i < n; i++){
    if (total + arr[i] <= t){
        total += arr[i];
        completed++;
    }
    else{
        break;
    }
   
}
std::cout << completed;
}
