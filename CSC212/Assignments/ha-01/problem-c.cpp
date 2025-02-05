#include <iostream>

int main(){
    int c;

    std::cin >> c;
    std::cout << "  ";
    for (int i = 0; i < c; i++){
        std::cout << "H ";
    }
    std::cout << '\n';
    std::cout << "  ";

      for (int i = 0; i < c; i++){
        std::cout << "| ";
    }
    std::cout << '\n' << "H-";

      for (int i = 0; i < c; i++){
        std::cout << "C-";
    }
    std::cout << "OH" << '\n';

    std::cout << "  ";
    for (int i = 0; i < c; i++){
        std::cout << "| ";
    }
    std::cout << '\n';
    std::cout << "  ";

      for (int i = 0; i < c; i++){
        std::cout << "H ";
    }

    return 0;
}