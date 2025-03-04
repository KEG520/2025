#include "stack.h"
#include <iostream>
#include <string>
#include <cctype>

int evaluateExpression(const std::string& expr) {
    Stack<int> operands;
    Stack<char> operators;

    for (size_t i = 0; i < expr.length(); ++i) {
        char ch = expr[i];

        if (isspace(ch)) {
            continue;  // Ignore white spaces
        } else if (isdigit(ch)) {
            operands.push(ch - '0');  // Convert char to int
        } else if (ch == '(') {
            continue;  // Ignore left parenthesis
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operators.push(ch);
        } else if (ch == ')') {
            if (operators.empty() || operands.size() < 2) {
                throw std::runtime_error("Invalid expression");
            }

            char op = operators.top();
            operators.pop();

            int right = operands.top();
            operands.pop();
            int left = operands.top();
            operands.pop();

            int result = 0;
            switch (op) {
                case '+': result = left + right; break;
                case '-': result = left - right; break;
                case '*': result = left * right; break;
                case '/': result = left / right; break;
                default: throw std::runtime_error("Invalid operator");
            }

            operands.push(result);
        }
    }

    if (operands.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }

    return operands.top();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./expression_evaluator \"(expression)\"" << std::endl;
        return 1;
    }

    try {
        std::string expression = argv[1];
        int result = evaluateExpression(expression);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

}
