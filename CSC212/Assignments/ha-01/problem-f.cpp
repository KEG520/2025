#include <iostream>
#include <vector>
#include <algorithm>


// the list 50, 48, 7 and list 39, 6, 90
// correspon 7 to 6, 48 to 39 and 50 to 90
// this is if the list were  sorted greatest to least
// 7 48 50
// 6, 39, 90
// roder the second list to correspond with the first

// first list (og)    50,48,7
// corresponding      90,

int main(){


    int n;
    while (std::cin >> n ){
        if (n == 0){

            break;
        }
        std::vector<int> first (n);
        
        std::vector<int> scnd (n);


        for(int i=0; i < n; i++){
            std::cin >> first[i];
        }


        for(int i=0; i < n; i++){
            std::cin >> scnd[i];
            
         }
        std::vector<int> og(n);
        for (int i = 0; i < n; i++) {
            og[i] = i;
        }
         

// reorder the first

        std::sort(og.begin(), og.end(), [&first](int i, int j) {
            return first[i] < first[j];
        });

        // for (int i=0; i < first.size() - 1; i++){
        //     for (int j=0; j < first.size() - 1 - i;j++){
        //         if (first[j] > first[j+1] ){
        //             std::swap(first[j], first[j + 1]);
        //             // int swap = first[j];
        //             // first[j] = first[j+1];
        //             // first[j+1] = swap;
   
   
              


        std::vector<int> reorderscn(n);
        std::vector<int> sorted = scnd;
        std::sort(sorted.begin(), sorted.end());

        
        // 
        
        for(int i = 0; i < n; i++){
            reorderscn[og[i]] = sorted[i];
        }
        for (int i = 0; i < n; i++) {
            std::cout << reorderscn[i] << '\n';
        }

        std::cout << '\n'; 
    }

    std::cout << "\n";

    return 0;

}
        


        // for (int i=0; i < scnd.size(); i++){
        //     for (int j=0; j < scnd.size() - 1 - i;j++){
        //         if (scnd[j] > scnd[j+1] ){
        //             std::swap(scnd[j], scnd[j + 1]);
        //             std::swap(snditr[j], snditr[j+1]);
                    
        //             // snditr[i] = j; 

        //             // int swap = scnd[j];
        //             // scnd[j] = scnd[j+1];
        //             // scnd[j+1] = swap;
        //         }
        //     }
        // }


        
    

