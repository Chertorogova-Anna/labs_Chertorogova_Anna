#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int max_index = 0,min_index = 0,k=1,c=1;
    int a[] = {56,78,92,21,3,21,56,21,92};
    int size = sizeof(a) / sizeof(a[0]); 
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < size; i++){
        if (a[i] > max){
            max = a[i];
            max_index = i;
            k=1; 
        }
        else if (a[i] == max) {
            k++;   // Нашли еще одно такое же число, увеличиваем счетчик
        }
        if (a[i] < min){
            min = a[i];
            min_index = i;
            c = 1;
        } 
        else if (a[i] == min) {
            c++;   // Нашли еще одно такое же число, увеличиваем счетчик
        }
    }
    cout << "max = " << max << '\n' << "Первый встретившийся max: " << max_index << endl;
    cout << "min = " << min << '\n' << "Первый встретившийся min: " << min_index << endl;
    cout << "Количество совпадений max: "<< k << '\n' << "Количество совпадений min: "<< c << endl;
    return 0;
}
