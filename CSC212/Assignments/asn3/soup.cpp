#include <iostream>
#include <stack>

int main(){
    int l;
    std::cin >> l;
    std::string text;

    std::cin.ignore();
    std::getline(std::cin, text);

    std::stack<std::pair<char, int>> soup;



    for (int i = 0; i < l; i++){
        char s = text[i];

        if (s == '(' || s == '[' || s == '{' ){
            soup.push({s,i});
        }

        else if (s == ')' || s == ']' || s == '}' ){
            if (soup.empty()){
                std::cout << s << " " << i;
                return 0;
            }

            char
        }
        
    }
}