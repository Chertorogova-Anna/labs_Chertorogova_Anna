#include <iostream>
#include <clocale>
using namespace std;
void calculateAverages(int a[100][100], int n, int k, double avg[100]) {
    for (int j = 0; j < k; j++) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        avg[j] = sum / n;
    }
}
int countElements(int a[100][100], int n, int k, double avg[100]) {
    int t = 0;
    for (int j = 1; j < k; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i][j] > avg[j-1]) {
                t++;
            }
        }
    }
    return t;
}

int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int n,k;
    double avg[100]; 
    cout << "Введите количество строк и столбцов: ";
    cin >> n >> k;
    int a[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<k;j++){
            cin >> a[i][j];
        }
    }
    calculateAverages(a,n,k,avg);
    int result = countElements(a, n, k, avg);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Среднее арифметическое 1-го столбца: " << avg[0] << endl;
    cout << "Количество элементов, превышающих среднее предыдущего столбца: " << result;
    return 0;
}
