#include <iostream>
#include <vector>

const int SIZE = 24;


void floodFill(std::vector<std::vector<int>>& image, int x, int y, int originalColor) {
    
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
        return;

    
    if (image[x][y] != originalColor || image[x][y] == 0)
        return;

    
    image[x][y] = 0;

    
    floodFill(image, x + 1, y, originalColor);
    floodFill(image, x - 1, y, originalColor); 
    floodFill(image, x, y + 1, originalColor); 
    floodFill(image, x, y - 1, originalColor); 
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./prog <filename> <x> <y>\n";
        return 1;
    }

    const char* filename = argv[1];

    
    int x = 0, y = 0;
    for (char* p = argv[2]; *p; ++p) x = x * 10 + (*p - '0');
    for (char* p = argv[3]; *p; ++p) y = y * 10 + (*p - '0');

    std::vector<std::vector<int>> image(SIZE, std::vector<int>(SIZE));

    
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            std::cin >> image[i][j];

    int originalColor = image[x][y];
    if (originalColor != 0)
        floodFill(image, x, y, originalColor);

    // Output the modified image
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << image[i][j];
            if (j < SIZE - 1) std::cout << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
