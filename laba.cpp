#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x1, y1, a, b;
    cout << "Введите x1 и x2" << endl;

    cin >> x1 >> y1;

    cout << "Введите a и b" << endl;

    cin >> a >> b;

    int x2 = x1 + a;
    int y2 = y1 - b;

    int area = a * b;

    cout <<  x2 << ", " << y2 <<  endl;
    cout <<  area <<  endl;

    return 0;
}
