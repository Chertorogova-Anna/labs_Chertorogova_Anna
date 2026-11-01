#include <iostream>
#include <clocale>
using namespace std;

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int a[] = {4, 87, 456, 9, 12, 98};
    int size = sizeof(a) / sizeof(a[0]);
    
    cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // Вызов функции из вашей блок-схемы
    selection_sort(a, size);
    
    cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
