#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Введите 3 числа (a, b, c): ";
    int a, b, c;
    cin >> a >> b >> c;

    int minNum = min(a, min(b, c));

    (minNum > 10 ?
        cout << " " << (a * 2) << " " << (b * 2) << " " << (c * 2) :
        cout << " " << (a + b + c) << " " << (a * b * c)
        );

    return 0;
}