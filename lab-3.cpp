//Вариант 4
//Найти сумму всех отрицательных чисел, наибольшее из таких чисел и количество его повторений.
//Найти наибольшую цифру числа.

#include <iostream>
using namespace std;

int main()
{
    // Пункт 1
    int amount;
    cout << "Количествое чисел: "; //1) последовательность целочисленных чисел, ввод с  клавиатуры 
    cin >> amount;     //1)

    int sum = 0, count = 0, maxNeg = -9999999;
    bool found = false;

    cout << "Введите " << amount << " числа: ";

    for (int i = 0; i < amount; i++) { // последовательность 1)
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

    if (!found) { // если нету отриц чисел
        cout << "Нет отрицательных чисел" << endl;
    }
    else {
        cout << "Сумма отрицательных:" << sum << endl;
        cout << "Наибольшее отрицательное:" << maxNeg << endl;
        cout << "Его количество:" << count << endl;
    }

    // Пункт 2
    int x; // ПУНКТ 2 ВВОДИМ X 

    cin >> x; // для проверки  целочислленности
    
    if (x >= -999 && x <= 999) {
        if (x < 0) x = -x; // убираю минус если есть

        int a = x / 100; // 1 первая
        int b = (x / 10) % 10; // средняя
        int c = x % 10; // последняя

        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;

        cout << "Сама большая цифра:" << max << endl;
    }

    return 0;
}
