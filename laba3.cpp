#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int x;
    std::cout << "значение x: ";
    std::cin >> x;

    int x2 = x * x;           
    int x4 = x2 * x2;         
    int x5 = x4 * x;          
    int x8 = x4 * x4;         
    int x10 = x8 * x2;        
    int x15 = x10 * x5;       

    int y = x15 - x5 + x2 - 2;

    std::cout << " " << y << std::endl;

    return 0;
}