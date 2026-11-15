#include <iostream>
#include <clocale>
#include <cmath>
#include <cstdarg>
using namespace std;
double S(double l,double m,double k){
    if (l+m>k && m+k>l && l+k>m){
        double p = (l+m+k)/2.0;
        return sqrt(p*(p-l)*(p-m)*(p-k)); 
    }else{
        return -1;
}
}
double square(double n,...){
    va_list args;
    va_start(args,n);
    double sum_sides = 0;
    for (int i=0;i<n;i++){
        sum_sides += va_arg(args, double);
    }
    va_end(args);
    double a = sum_sides / n;
    const double pi = 3.14159265358979323846;
    return (n*a*a)/(4*tan(pi/n));
}
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    double l,m,k;
    cout << "Введите стороны треугольника: ";
    cin >> l >> m >> k;
    double result = S(l,m,k);
    cout <<"Площадь треугольника: "<<result;
    if (result == -1) { 
        cout << '\n'<<"Треугольника с такими сторонами не существует!" << endl;
    }
    cout << "\nРабота функции square: " << endl;
    cout << "Площадь 3-угольника (5, 5, 5): " << square(3, 5.0, 5.0, 5.0) << endl;
    cout << "Площадь 5-угольника (4, 4, 4, 4, 4): " << square(5, 4.0, 4.0, 4.0, 4.0, 4.0) << endl;
    cout << "Площадь 8-угольника (все стороны по 2): " << square(8, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0) << endl;
    return 0;
}
