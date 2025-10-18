#include
using namespace std;

int main()
{
// Пункт 1
int amount;
cout << "Количество чисел: ";
cin >> amount;

int sum = 0, count = 0, maxNeg = 0;
bool found = false;

cout << "Введите " << amount << " чисел: ";

for (int i = 0; i < amount; i++) {
    int num;
    cin >> num;

    if (num < 0) {
        if (!found) {  // Первое отрицательное число
            
            maxNeg = num;
            found = true;
            count = 1;
        } else {
           
            if (num > maxNeg) {   
                maxNeg = num;
                count = 1;
            }
            else if (num == maxNeg) {
                count++;
            }
        }
        sum += num;
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
cout << "Введите число для поиска наибольшей цифры: ";
cin >> x;

if (x >= -999 && x <= 999) {
    if (x < 0) x = -x;

    int t = x;
    int maxnumeral = 0;
    
    if (t == 0) {
        maxnumeral = 0;
    } else {
        while (t > 0){
            int numeral = t % 10;
            if (numeral > maxnumeral){
                maxnumeral = numeral;
            }
            t = t / 10;
        }
    }
    cout << "Наибольшая цифра: " << maxnumeral << endl;
} else {
    cout << "Число вне допустимого диапазона" << endl;
}

return 0;
}
