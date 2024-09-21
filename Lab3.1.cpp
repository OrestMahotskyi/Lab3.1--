#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y, x, A, B;
    cout << "x = "; cin >> x;

    A = 13.5 - (2 * x);
    // перший спосіб
    if (x <= -1)
    {
        B = exp(0.4 + x);
    }
    else if (-1 < x && x < 1)
    {
        B = 1 - (sin(x) * sin(x));
    }
    else
    {
        B = cos(x) / (1 + (sin(x) * sin(x)));
    }
    
    y = A + B;
    cout << "y = " << y << endl;
    
    A = 13.5 - (2 * x);
    // другий спосіб
    if (x <= -1)
    {
        B = exp(0.4 + x);
    }
    else
        if (x >= 1)
        {
            B = cos(x) / (1 + (sin(x) * sin(x)));
        }
        else
        {
            B = 1 - (sin(x) * sin(x));
        }
    y = A + B;
    cout << "y = " << y << endl;
    


    return 0;
}
