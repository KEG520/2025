#include <iostream>
#include <stack>
#include <string>

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

            char top = soup.top().first;

            if ((s == ')' && top == '(') || (s == ']' && top == '[') || (s == '}' && top == '{')) {
                soup.pop();
            }
            else{
                std::cout << s << " " << i;
                return 0;
            }
        
    }
    }
    std::cout << "ok so far" << std::endl;

    return 0;
}
