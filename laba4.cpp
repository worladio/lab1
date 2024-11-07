#include <iostream>
#include <cmath> 
using namespace std;

#define M_PI 3.141592

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double m;

    if (x <= 5) {
        m = M_PI * x - M_PI / 2;
    }
    else if (x < 15) {
        m = x * x + 10;
    }
    else {
        m = (2 * sqrt(x) + 1) / x;
    }

    cout << "m = " << m << std::endl;

    return 0;
}