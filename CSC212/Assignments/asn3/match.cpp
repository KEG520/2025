#include <iostream>
#include <stack>
#include <vector>
#include <string>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> values(26);

    for (int i = 0; i < n; i++){
        char val;
        std::cin >> val;
        values[i] = (val == 'T');
    }

    std::stack<bool> cut;
    std::string expression;
    std::cin.ignore();
    std::getline(std::cin, expression);

    for (char ch : expression){
        if (ch == ' ')continue;

        if (ch >= 'A' && ch <= 'Z'){
            cut.push(values[ch - 'A']);
        }
        else if (ch == '*'){
            bool b = cut.top();
            cut.pop();

            bool a = cut.top();
            cut.pop();

            cut.push(a && b);
        }
        else if (ch == '+'){
            bool b = cut.top();
            cut.pop();

            bool a = cut.top();
            cut.pop();

            cut.push(a || b);
        }
        else if (ch == '-'){
            bool a = cut.top();
            cut.pop();

            cut.push(!a);
        }


    }
    

    std::cout <<  (cut.top() ? 'T' : 'F');

}