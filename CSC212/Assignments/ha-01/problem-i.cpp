#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int k,n;


    

    std::cin >> k;


    std::string myans;
    std::cin >> myans;

    std::string others;
    std::cin >> others;

    n = myans.size();
    int match = 0;
    int diff = 0;
    

    

    for (int i=0; i < n; ++i){
        if (myans[i] == others[i]){
            match++;

        }
        else{
            diff++;
        }
    }
    int final = std::min(match, k) + diff - std::max(0, k - match);

    std::cout << final;

    return 0;
}

