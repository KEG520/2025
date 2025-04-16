#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include "bst.hpp"

// Tokenizer (same as yours)
std::vector<std::string> tokenize(const std::string& line) {
    std::vector<std::string> tokens;
    std::string currentToken;

    for (char c : line) {
        if (std::isalpha(c)) {
            currentToken += std::tolower(c);
        } else if (!currentToken.empty()) {
            tokens.push_back(currentToken);
            currentToken.clear();
        }
    }

    if (!currentToken.empty()) {
        tokens.push_back(currentToken);
    }

    return tokens;
}

int main() {
    BST<std::string> dictionary;
    BST<std::string> not_found;

   
    std::ifstream dictFile("words.txt");
    if (!dictFile.is_open()) {
        std::cerr << "Failed to open words.txt" << std::endl;
        return 1;
    }

    std::vector<std::string> wordList;
    std::string word;
    while (dictFile >> word) {
        wordList.push_back(word);
    }
    dictFile.close();

    
    std::shuffle(wordList.begin(), wordList.end(), std::default_random_engine(42));

    for (const std::string& w : wordList) {
        dictionary.insert(w);
    }

    // Print size, height, log2(size)
    size_t size = dictionary.get_size();
    size_t height = dictionary.get_height();
    double log2n = std::log2(size);

    std::cout << "Dictionary size: " << size << std::endl;
    std::cout << "Dictionary height: " << height << std::endl;
    std::cout << "log2(n): " << log2n << std::endl;

    // Step 2: Process War and Peace
    std::ifstream bookFile("2600-0.txt");
    if (!bookFile.is_open()) {
        std::cerr << "Failed to open 2600-0.txt" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(bookFile, line)) {
        std::vector<std::string> tokens = tokenize(line);
        for (const std::string& token : tokens) {
            if (!dictionary.search(token)) {
                not_found.insert(token);
            }
        }
    }
    bookFile.close();

    std::cout << "\nWords not found in dictionary:\n";
    not_found.print_in_order();

    return 0;
}
