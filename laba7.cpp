#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n целых чисел : ";
    cin >> n;

    int sum15 = 0;
    int kolv3and5 = 0;
    int proizv3 = 1; 

    for (int i = 0; i < n; ++i) {
        int number;
        cout << "Целое число: ";
        cin >> number;
        if (number % 100 == 15) {
            sum15 += number;
        }
        if (number % 3 == 0 && number % 5 == 0) {
            ++kolv3and5;
        }
        int temp = abs(number);
        while (temp >= 10) {
            temp /= 10;
        }
        if (temp == 3) {
            proizv3 *= number;
        }
    }
    cout << "a ) Сумма чисел, заканчивающихся на 15: " << sum15 << endl;
    cout << "b ) Количество чисел, кратных 3 и 5: " << kolv3and5 << endl;
    cout << "c ) Произведение чисел, начинающихся на 3: " << proizv3 << endl;

    return 0;
}
