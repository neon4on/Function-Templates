#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

template <class Type> 
void MinElement (Type* c, int a, double b) {
    for (int a = 0; a < 5; a++) {
        if (b > c[a]) {
            b = c[a];
        }
    }
    cout << "Minimum Element: " << b << endl;
}

template <class A>
void SumElementBetweenOneAndTwoNegative (A* c, int a, double k, double f, int countk, int countf, double sum) {
    for (int a = 0; a < 5; a++) {
        if (c[a] < 0) {
            k = c[a];
            break;
        }
        countk = countk + 1;
    }
    for (int a = 0; a < 5; a++) {
        if (c[a] < 0 && c[a] != k) {
            f = c[a];
            break;
        }
        countf = countf + 1;
    }
    for (a = countk + 1; a < countf; a++) {
        sum = sum + c[a];
    }
    cout << "1 negative Element: " << k << endl;
    cout << "1 negative Index: " << countk << endl;
    cout << "2 negative Element: " << f << endl;
    cout << "2 negative Index: " << countf << endl;
    cout << "Sum Element between 1 and 2 negative: " << sum << endl;
}

template <class B>
void Sort(B* c, int a) {
    for (int a = 0; a < 5; a++) {
        if (abs(c[a]) <= 1) {
            cout << c[a] << " ";
        }
    }
    for (int a = 0; a < 5; a++) {
        if (abs(c[a]) > 1) {
            cout << c[a] << " ";
        }
    }
}

int main()
{
    int a = 0, countf = 0, countk = 0;
    const int i = 0;
    const int n = 5;
    const double c[n] = { 1.55,-2.33,3.11, 4.77, -5.99 };
    double b = c[0], sum = 0, k = 0, f = 0;
    MinElement(c, a, b);
    SumElementBetweenOneAndTwoNegative(c, a, k, f, countk, countf, sum);
    Sort(c, a);
}