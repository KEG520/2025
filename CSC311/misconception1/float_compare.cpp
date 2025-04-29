#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    float f1 = 0.1f * 3;
    float f2 = 0.3f;

    double d1 = 0.1 * 3;
    double d2 = 0.3;

    std::cout << std::boolalpha; //(this will tell you if true or false)

    std::cout << "Float: 0.1f * 3 == 0.3f ? " << (f1 == f2) << '\n';
    std::cout << "Values: f1 = " << std::fixed << std::setprecision(10) << f1 << ", f1 = " << f2 << '\n';

    std::cout << "Double Comparison: 0.1 * 3 == 0.3 ? " << (d1 == d2) << "\n";
    std::cout << "Double values: d1 = " << std::setprecision(20) << d1
              << ", d2 = " << d2 << "\n";

    return 0;
}

