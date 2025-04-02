#include <iostream>

void draw_triangle_recursive(int a, int b, int c, int current_len) {
    if (current_len > b) {
        return;
    }


    for (int i = 0; i < current_len; ++i) {
        std::cout << '+';
    }
    std::cout << std::endl;

    draw_triangle_recursive(a, b, c, current_len + c);


    if (current_len + c <= b) {
        for (int i = 0; i < current_len; ++i) {
            std::cout << '+';
        }
        std::cout << std::endl;
    }
}

void draw_triangle(int a, int b, int c) {
    draw_triangle_recursive(a, b, c, a);
}

int main() {
    
    std::cout << "draw_triangle(4, 7, 1):\n";
    draw_triangle(4, 7, 1);
    std::cout << "\n";

    std::cout << "draw_triangle(3, 10, 3):\n";
    draw_triangle(3, 10, 3);
    std::cout << "\n";

    std::cout << "draw_triangle(1, 1, 1):\n";
    draw_triangle(1, 1, 1);
    std::cout << "\n";

    std::cout << "draw_triangle(1, 7, 7):\n";
    draw_triangle(1, 7, 7);
    std::cout << "\n";

    return 0;
}