// Kadden Grant 1/29/25

//Pointer Declaration & Basic Operations

#include <iostream>


int main() {
    // TODOs

    // create an integer variable and a pointer to it
    int a;
    a = 10;
    int* ptr = &a;
    std::cout << *ptr<< '\n';
    


    // create a double variable and a pointer to it

    double b;
    b = 10.5;
    double* voo = &b;
    std::cout << *voo << '\n';
    
    // for both variables, print their memory addresses 
    // using hexadecimal values, and their current values
    // (no need to initialize the variables)
    std::cout << "Mem Adress" << &a << '\n';
    std::cout << "Mem adress" << &b;


    // modify the values of the variables using 
    // the pointers

    *ptr = 20;
    *voo = 20.50;
}


//Pointers to variables of different types

int main() {
    // TODOs

    // create an array of characters and initialize it 
    // with "hello"

    char textarr[5] = {'h','e','l','l','o'};


    // create an integer array and initialize it 
    // with {1, 2, 3, 4, 5}

    int numarr[5] = {1, 2, 3, 4, 5};

    // declare/create pointers to both arrays
    char* foo = textarr;
    int* voo = numarr;

    //std::cout << ptr << '\n' << voo;


    // traverse the character array using the respective 
    // pointer (ptr++) and print each character and its 
    // corresponding memory address (in hexadecimal)

    for(int i=0; i < 5; i++){
        std::cout << textarr[i];
        std::cout <<"  "<< (void*)foo << '\n';


        foo++;


        
    }

    // traverse the integer array using the respective
    // pointer (ptr++) and print each integer and its
    // corresponding memory address (in hexadecimal)

    for(int i=0; i < 5; i++){
        std::cout << numarr[i] << "  " << voo << "\n";
        voo++;

}
}