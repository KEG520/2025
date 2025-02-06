#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void position(const std::vector<std::pair<double, double>>& mv){
    std::vector<int> result;

    int n;
    double x = 0.0;
    double y = 0.0;
    double ang = 90.0;

    for (const auto& move : mv){
        double rot = move.first;
        double dist = move.second;
        
        ang += rot;

        double radical = ang * M_PI / 180.0;

        x += dist * std::cos(radical);
        y += dist * std::sin(radical);
        


    }

    std::cout << std::fixed << std::setprecision(6) << x << " " << y;


}


int main(){

    int g;
    std::cin >> g ;
    while (g--){
        int n;
        std::cin >> n;
        std::vector<std::pair<double, double>> mv;

        for (int i=0; i < n; ++i){
            double rot, dist;
            std::cin >> rot >> dist;
            mv.emplace_back(rot, dist);
        }
      position(mv);
    }

  
    return 0;


}