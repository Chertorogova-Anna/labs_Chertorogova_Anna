#include <iostream>
#include <clocale>

using namespace std;
int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a[] = {5, 10, 15, 20, 25}; // Массив для проверки
    int size = sizeof(a) / sizeof(a[0]);
    int i = 1; 
    bool f = false;
    while (i < size && !f) {
        if (a[i] <= a[i - 1]) { 
            f = true;   
        }
        
        i++; 
    }
    if (f == false) {
        cout << "Массив упорядочен по возрастанию." << endl;
    } else {
        cout << "Массив НЕ упорядочен по возрастанию (есть нарушение)." << endl;
    }

    return 0;
}
