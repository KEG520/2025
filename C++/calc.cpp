#include <iostream>
#include <cmath>
#include <string>

int main(){


// DATA COLLECTION
//----------------------------------------------------------------------------\\

    //define var

    std::string operation;
    std::string continuecal;
    double x,y;


    do{

    // getting user data

    std::cout << "Enter your first number (0-9)" << '\n';
    while(!(std::cin >> x)) {
        std::cout << "!Invalid input! Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        }


    std::cout << "Enter your second number(0-9)" << '\n';
    while(!(std::cin >> y)){
        std::cout << "!Invalid input! Please enter a valid number:";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        }



    std::cout << "Enter your Operation" <<'\n' << "Available Operations : (+, -, *, /)" << '\n';
    std::cin >> operation ;

     //std::cout << '\n' << "!ERROR CHECKING!" << '\n' <<"x = " << x << '\n'<< "y = " << y << '\n' << "Operation = " << operation << '\n';


//----------------------------------------------------------------------------\\




        if (operation == "+"){
            std::cout << x + y << '\n';
        }
        else if (operation == "-"){
            std::cout << x - y << '\n';
        }
         else if (operation == "%"){
            std::cout << x - y << '\n';
        }
        else if (operation == "*"){
            std::cout << x * y << '\n';
        }
        else if (operation == "/"){
            if (y != 0){
                std::cout << x / y << '\n';
            }
            else{
                std::cout << "Error: Division by zero is not allowed.\n";
            }

        }
        else {
            std::cout << "Not a recoginzed operation \n";
        }

        std::cout << "Do another calculation? (YES or y)\n";
        std::cin >> continuecal;
    }
    while (continuecal == "YES" || continuecal == "y" || continuecal == "Yes");
    std::cout << "Goodbye!\n";
}
