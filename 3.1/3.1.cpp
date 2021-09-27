#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double x;
    double y;

    double A;
    double B;

    cout << "X = ";
    cin >> x;

    A = 2 * abs(5 - x);
    
    if (x <= -1)
        B = exp(abs(2+x));
    if (-1 < x < 1)
        B = pow(sin(1 / (abs(2 + x))), 2);
    if (x >= 1)
        B = pow(cos(x), 2)/(1 + abs(sin (x)));

    y = A - B;

    cout << "Result1 : " << y << endl;


    if (x <= -1)
        B = exp(abs(2 + x));
    else 
        if(-1 < x < 1)
            B = pow(sin(1 / (abs(2 + x))), 2);
        else
        B = pow(cos(x), 2) / (1 + abs(sin(x)));

    y = A - B;

    cout << "Result2 : " << y << endl;


    system("pause");
    return 0;
}
