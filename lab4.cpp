#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru_Ru.UTF-8");
    int N = 100; 
    int a[100];  
    int size = 0;
 
    cout << "--- Начало работы ---" << endl;
    cout << "\n добавляем 10:" << endl;
    a[size] = 10;
    size++;       
    for (int i = 0; i < size; i++) cout << a[i] << " "; 
    cout << endl;
    cout << "добавляем 20:" << endl;
    a[size] = 20;
    size++;
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
    cout << "добавляем 30:" << endl;
    a[size] = 30;
    size++;
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;

    cout << "\n удаляем верхний элемент (30):" << endl;
    size--; 
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;

    cout << "\n добавляем 40:" << endl;
    a[size] = 40;
    size++;
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;

    cout << "\n удаляем все элементы:" << endl;
    size = 0; 
    if (size == 0) {
        cout << "Стек пуст." << endl;
    }
    return 0;
}

