#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int matrix[2][3] = {{1, 6, 7},{4, 8, 9}};
    int max = matrix[0][0],max_row = 0,max_col = 0; 
    int rows = sizeof(matrix) / sizeof(matrix[0]); // Количество строк 
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]); // Количество столбцов 
    for (int i =0;i < rows;i++){
        for (int j=0;j < cols;j++){
            if (matrix[i][j]>max){
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    cout << "Максимальное значение: " << max << endl;
     cout << "Строка: " << max_row << ", Столбец: " << max_col << endl; 
    return 0;
}
