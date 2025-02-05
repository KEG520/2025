#include <iostream>
#include <vector>
#include <string>
int main(){

    //CPR Number 

    // 10 digit number (6 repesent the birthday) (4 are a sequence number)
    //example number 070761-4285

    std::string cpr;
    std::cin >> cpr;

    // get rid of the dash // Complete
    //source https://www.geeksforgeeks.org/stdstringerase-in-cpp/

    cpr.erase(cpr.begin() + 6);

    // std::cout << cpr;



    // append each number into a vector 0-9 (10 digits) 
    std::vector<char> numbersstr;

    for (int i=0; i < cpr.length(); i++){
        numbersstr.push_back(cpr[i]);;

    }
    for (int i = 0; i < numbersstr.size(); i++) {
        std::cout << numbersstr[i] << " ";
    }

    // turn each char into a readable interger  (int)
    // using the stoi method (string to int)
    //sourcce https://www.geeksforgeeks.org/convert-string-to-int-in-cpp/?ref=header_outind
    




    // a based vector that included the cpr sequence
    //


    return 0;


} 