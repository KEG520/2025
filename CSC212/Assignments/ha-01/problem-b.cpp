#include <iostream>

int main(){
    
    int n, d;
    
    while(!(std::cin >> n) || n < 1 || n > 50){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    
    
    int e = 0;

    for (int i = 0; i < n; i++){
        while(!(std::cin >> d) || d < 0 || d > 100){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        }
    if (d % 2 != 0){
        e++;
        }
    
    }
    std::cout << e;
}