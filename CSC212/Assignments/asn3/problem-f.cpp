#include <iostream>
#include <stack>

int main(){
    int n;
    std::cin >> n;

    std::stack<int> socks;
    int moves = 0;

    for (int i = 0; i < 2 * n; i++){
        int sock;
        std::cin >> sock;

        if (!socks.empty() && socks.top() == sock){
            socks.pop();
        }
        else{
            socks.push(sock);
        }
        moves++;
    }

    if (socks.empty()){
        std::cout << moves;
    }
    else{
        std::cout << "impossible";
    }
    return 0;
}
