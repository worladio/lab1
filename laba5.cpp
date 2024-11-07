#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "количество точек";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double x, y;
        cout << "координаты точки" << i + 1 << " (x y): ";
        cin >> x >> y;

        if ((x <= 3 && x >= 0 && y >= -6 && y <= 6 && (x * x + y * y <= 36)) || ( y <= 2 * x + 6)) {
            cout << "YES" << std::endl;
        }
        else {
            cout << "NO" << std::endl;
        }
    }

    return 0;
}