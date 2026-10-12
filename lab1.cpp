//1 задание
#include <iostream>
using namespace std;
int main() {
    // Данные типа float
    float a = 100.0f, b = 0.001f;
    float a2 = a * a;
    float a3 = a2 * a;
    float a4 = a3 * a;
    float b2 = b * b;
    float b3 = b2 * b;
    float b4 = b3 * b;

    float chislitel = 6 * a2 * b2 - 4 * a * b3 + b4;
    float znamenatel = 6 * a2 * b2 - 4 * a * b3 + b4;
    float result_float = chislitel / znamenatel;

    cout << "float: " << result_float << endl;

    // Данные типа double
    double a_d = 100.0, b_d = 0.001;
    double a2_d = a_d * a_d;
    double a3_d = a2_d * a_d;
    double a4_d = a3_d * a_d;
    double b2_d = b_d * b_d;
    double b3_d = b2_d * b_d;
    double b4_d = b3_d * b_d;

    double chislitel_d = 6 * a2_d * b2_d - 4 * a_d * b3_d + b4_d;
    double znamenatel_d = 6 * a2_d * b2_d - 4 * a_d * b3_d + b4_d;
    double result_double = chislitel_d / znamenatel_d;

    cout << "double: " << result_double << endl;

    return 0;
}
//2 задание
#include <iostream>
using namespace std;

int main() {
    int n = 5, m = 3;
    int result1, result2, result3;

    // 1) ++n * ++m
    n = 5;
    m = 3;
    result1 = ++n * ++m;
    cout << "1) ++n * ++m = " << result1 << endl;
    cout << "   n = " << n << ", m = " << m << endl;

    // 2) m++ < n
    n = 5;
    m = 3;
    result2 = (m++ < n);
    cout << "2) m++ < n = " << result2 << endl;
    cout << "   n = " << n << ", m = " << m << endl;

    // 3) n++ > m
    n = 5;
    m = 3;
    result3 = (n++ > m);
    cout << "3) n++ > m = " << result3 << endl;
    cout << "   n = " << n << ", m = " << m << endl;

    return 0;
}

