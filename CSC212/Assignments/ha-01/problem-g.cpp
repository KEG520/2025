#include <iostream>
int main(){
    
    int r, n;
    std::cin >> r >> n;

    // std::cin >> n;

    bool booked[101] = {false};

    for (int i=0; i < n; i++){
        int room;
        std::cin >> room;
        booked[room] = true;
    }
    for (int i=1; i <= r; i++){
    if (!(booked[i])){
        std::cout << i << '\n';
        return 0;
    }
    }

    std::cout << "too late";

    return 0;







}