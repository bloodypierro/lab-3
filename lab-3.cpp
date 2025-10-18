//Вариант 4
//Найти сумму всех отрицательных чисел, наибольшее из таких чисел и количество его повторений.
//Найти наибольшую цифру числа.

#include <iostream>
using namespace std;

int main()
{
    // Пункт 1 
    int amount;
    cout << "Количество чисел: "; //1) последовательность целочисленных чисел, ввод с  клавиатуры 
    cin >> amount;     //1)

    int sum = 0, count = 0, maxNeg = 0;
    bool found = false;

    cout << "Введите " << amount << " чисел: ";

    for (int i = 0; i < amount; i++) { // последовательность 1)
        int num;
        cin >> num;

        if (num < 0) {
            found = true;
            sum += num;
            if (num > maxNeg) {
                maxNeg = num; //  первое отрицательное
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

    cin >> x;
    
    if (x >= -999 && x <= 999) {
        if (x < 0) x = -x; // убираю минус если есть

       int t = x; // t переменная для работы с числом
       int maxnumeral = 0;
       while (t > 0){
       int numeral = t % 10; // получаем последнюю цирфу
       if (numeral > maxnumeral){
       maxnumeral = numeral;
       }
       t = t / 10; // удаляем последнюю цифру
       }
        cout << "Наибольшая цифра:" << maxnumeral << endl;
    }

    return 0;
}
