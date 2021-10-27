#include "MyMathFuncs.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c;
    cout << "Введите сторону а: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    c = sqrt(a * a + b * b);
        
    try
    {
        cout << "Периметр равен: " << MathFuncs::MyMathFuncs::Perimeter(a, b, c) << endl;
        cout << "Площадь равна: " << MathFuncs::MyMathFuncs::Square(a, b, c) << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
}

