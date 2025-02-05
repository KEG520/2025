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




    // turn each char into a readable interger  (int)
    // using the stoi method (string to int)
    //sourcce https://www.geeksforgeeks.org/convert-string-to-int-in-cpp/?ref=header_outind

    //int seqence = 0;
    //std::cout << seqence;

    // append each number into a vector 0-9 (10 digits) 
    std::vector<int> newseq;
    for (int i=0; i < cpr.length(); i++){
        // to conver a string holding ints string s = "12356" | use the int ____ = str[i] - '0';
        int curnum = cpr[i] - '0';
        newseq.push_back(curnum);
        //std::cout << newseq[i] << ' ';
        
    }

    std::vector<int> setvals = {4,3,2,7,6,5,4,3,2,1};
    int sum = 0;
    for (int i = 0 ; i < newseq.size(); i++){
        sum += newseq[i] * setvals[i];
        
    }
    int test = 0;
    if (sum % 11 == 0){
        test++;
    }
    else{
        test = 0;
    }
    std::cout << test;
    





    // a based vector that included the cpr sequence
    //


    return 0;

// advance reasoning 
// 

} 