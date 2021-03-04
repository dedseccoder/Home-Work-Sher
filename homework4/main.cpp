#define _USE_MATH_DEFINES
#define _EOE 8.85 * pow(10,-12)

#include <iostream>
#include <math.h>
using namespace std;

double calculation(float, float);

int main()
{
    int i, q, r;
    i = 1;
 // 1
    cout << "Введите значение " << i << " заряда поля: ";
    cin >> q;
    cout << "\nВведите расстояние от " << i << " заряда до точки: ";
    cin >> r;
    cout << "\nНапряженность " << i << " поля = " << calculation(q, r) << endl;
    i++;
//2
    cout << "Введите значение " << i << " заряда поля: ";
    cin >> q;
    cout << "\nВведите расстояние от " << i << " заряда до точки: ";
    cin >> r;
    cout << "\nНапряженность " << i << " поля = " << calculation(q, r) << endl;
    i++;
//3
    cout << "Введите значение " << i << " заряда поля: ";
    cin >> q;
    cout << "\nВведите расстояние от " << i << " заряда до точки: ";
    cin >> r;
    cout << "\nНапряженность " << i << " поля = " << calculation(q, r) << endl;
    return 0;
}

double calculation(float q, float r)
{
    return (q / (4 * M_PI * _EOE * pow(r, 2)));
}
