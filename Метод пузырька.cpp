#include <iostream>
#include <clocale> 
using namespace std;
void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a[] = {4,87,456,9,12,98};
    int size = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, size);
    for (int i = 0;i<size;i++){
            cout << a[i] << " ";
    } 
    return 0;    
}
