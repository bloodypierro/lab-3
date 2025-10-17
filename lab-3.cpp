//Вариант 4
//Найти сумму всех отрицательных чисел, наибольшее из таких чисел и количество его повторений.
//Найти наибольшую цифру числа.

#include <iostream>
using namespace std;

int main()
{
    // Пункт 1
    int amount;
    cout << "Количество чисел: ";
    cin >> amount;

    int sum = 0, count = 0, maxNeg = -9999999;
    bool found = false;

    cout << "Введите " << amount << " чисел: "; 

    for (int i = 0; i < amount; i++) {
        int num;
        cin >> num;

        if (num < 0) {
            found = true;
            sum += num;
            if (num > maxNeg) {
                maxNeg = num;
                count = 1;
            }
            else if (num == maxNeg) {
                count++;
            }
        }
    }

    if (!found) {
        cout << "Нет отрицательных чисел" << endl;
    }
    else {
        cout << "Сумма отрицательных: " << sum << endl;
        cout << "Наибольшее отрицательное: " << maxNeg << endl;
        cout << "Его количество: " << count << endl;
    }

    // Пункт 2
    int x;
    cout << "Введите X (|X| < 1000): ";  
    cin >> x;

    if (x >= -999 && x <= 999) {
        if (x < 0) x = -x;

        int a = x / 100;
        int b = (x / 10) % 10;
        int c = x % 10;

        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;

        cout << "Самая большая цифра: " << max << endl;  
    }
    else {
        cout << "Ошибка: |X| должен быть меньше 1000" << endl;
    }
    return 0;
}
