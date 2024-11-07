#include <iostream>
#include <cmath>
using namespace std;

double calculate_S(int n) {
    double S = 0;            
    double arg = 0;

    for (int m = 1; m <= n; ++m) {
        arg += 3 * m;   
        S += cos(arg); 
    }

    return S;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "значение n: ";
    cin >> n;

    double result = calculate_S(n);
    cout << "Результат S: " << result << endl;

    return 0;
}
