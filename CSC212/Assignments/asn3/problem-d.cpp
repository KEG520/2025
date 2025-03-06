#include <iostream>
#include <stack>
#include <vector>


int main(){
    int n;
    std::cin >> n;

    std::vector<int> cards(n);

    for (int i = 0; i < n; i++){
        std::cin >> cards[i];
    }

    std::stack<int> gme;

    for (int card : cards){
        if (!gme.empty() && (gme.top() + card) % 2 == 0){
            gme.pop();
        }
        else{
            gme.push(card);
        }
    }

    std::cout << gme.size();

    return 0;
}
