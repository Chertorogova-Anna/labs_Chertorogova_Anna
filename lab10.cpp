#include <iostream>
#include <clocale>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int n, k, start;
    cout << "Введите количество строк: ";
    cin >> n;
    char** arr = new char*[n];
    cout << "Введите строки:\n";
    for (int i = 0; i < n; ++i) {
        char buf[256];
        cin >> buf;
        arr[i] = new char[strlen(buf) + 1];
        strcpy(arr[i], buf);
    }
    cout << "Введите номер строки, с которой начать удаление (с 0): ";
    cin >> start;
    cout << "Введите количество строк для удаления: ";
    cin >> k;
    if (start < 0 || start >= n) {
        cout << "Некорректный номер строки!\n";
        for (int i = 0; i < n; ++i) delete[] arr[i];
        delete[] arr;
        return 1;
    }
    if (start + k > n) k = n - start;
    int newSize = n - k;
    char** newArr = new char*[newSize];
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (i < start || i >= start + k) {
            newArr[j++] = arr[i];
        } else {
            delete[] arr[i];
        }
    }
    delete[] arr;
    cout << "Массив после удаления:\n";
    for (int i = 0; i < newSize; ++i) {
        cout << newArr[i] << endl;
    }
    for (int i = 0; i < newSize; ++i) delete[] newArr[i];
    delete[] newArr;
    return 0;
}
