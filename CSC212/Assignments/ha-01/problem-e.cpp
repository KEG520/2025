#include <iostream>
#include <vector>

int main(){
    int wc, hc, ws, hs;
    std::cin >> wc >>  hc >>  ws >> hs;
    // wc = width of computer - hc = height of computer - ws = width of sticker - hs - width of sticker
    //                           0   1   2   3
    std::vector<int> sticker = {wc, hc, ws, hs};

    // for (int i=0; i < sticker.size(); i++){
    //     std::cout << sticker[i] << ' ';

    //bool test = true;
    if ((sticker[0] - sticker[2] >= 2) && (sticker[1] - sticker[3] >= 2)){
        
        std::cout << "1"; 
    }
    else{
        std::cout << "0";
    }
    return 0;
}


    





