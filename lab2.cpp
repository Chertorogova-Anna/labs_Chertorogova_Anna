#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double sum = 0.0;        // Итоговая сумма
    double eps = 0.0001;     // Заданная точность (10^-4)
    double an = 0.0;         // Текущий член ряда
    int n = 2;               
    an = pow(n, log(n)) / pow(log(n), n);
    while (an >= eps) {
        sum += an;      
        n++;
        // Вычисляем новый член ряда
        an = pow(n, log(n)) / pow(log(n), n);
    }
    cout << "Заданная точность: " << eps << endl;
    cout << "Сумма ряда с точностью " << eps << " равна: " << sum << endl;   
    cout << "Последний вычисленный член (не вошедший в сумму): " << an << endl;
    return 0;
}
