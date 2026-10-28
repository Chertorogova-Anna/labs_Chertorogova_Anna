#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
using namespace std;
double get_next_term(double current_term, int n, double x) {
    double numerator = (-1) * (2.0 * n * n + 4.0 * n + 3.0) * x * x;
    double denominator = (2.0 * n * n + 1.0) * (2.0 * n + 1.0) * (2.0 * n + 2.0);
    return current_term * (numerator / denominator);
}
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a = 0.1, b = 1.0;
    int k = 10;
    int n_fixed = 35; 
    double epsilon = 0.0001; 
    double step = (b - a) / k;
    cout << "Вычисление функции y = (1 - x^2/2)*cos(x) - (x/2)*sin(x)" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << setw(8) << "X" << setw(15) << "SN (n=35)" 
         << setw(15) << "SE (eps)" << setw(15) << "Y (точное)" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    for (double x = a; x <= b + 0.000001; x += step) {
        double sn = 0, term = 1.0;
        for (int n = 0; n < n_fixed; n++) {
            sn += term;
            term = get_next_term(term, n, x);
        }
        double se = 0; 
        term = 1.0; 
        int n_iter = 0;
        while (abs(term) >= epsilon) {
            se += term;
            term = get_next_term(term, n_iter, x);
            n_iter++;
        }
        double y = (1.0 - (x * x) / 2.0) * cos(x) - (x / 2.0) * sin(x);
        cout << fixed << setprecision(4);
        cout << setw(8) << x << setw(15) << sn 
             << setw(15) << se << setw(15) << y << endl;
    }

    return 0;
}
