#include <iostream>
#include <clocale> 
using namespace std;
void insert_sort(int* a,const int& n){
        for (int i=1;i<n;i++){
            for(int j=i;j > 0 ;j--){
                if (a[j]<a[j-1]){
                    int temp = a[j];
                    a[j] = a[j-1];
                    a[j-1] = temp;
                }
            }
        }
    }
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a[] = {4,87,456,9,12,98};
    int size = sizeof(a)/sizeof(a[0]);
    insert_sort(a, size);
    for (int i = 0;i<size;i++){
            cout << a[i] << " ";
    } 
    return 0;    
}
