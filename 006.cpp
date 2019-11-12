#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int a, b, c;
    int judge;
    int xa, xb;
    int sr;
    while (cin >> a >> b >> c)
    {
        judge = b*b-4*a*c;
        if (judge > 0)
        {
            xa = ((-1*b)+sqrt(b*b-4*a*c))/2*a;
            xb = ((-1*b)-sqrt(b*b-4*a*c))/2*a;
            if (xa > xb)
            {
                cout << "Two different roots x1=" << xa << " , x2=" << xb << endl;
            }
            else
            {
                cout << "Two different roots x1=" << xb << " , x2=" << xa << endl;
            }
        }
        else if (judge == 0)
        {
            sr = (-1*b)/(2*a);
            cout << "Two same roots x=" << sr << endl;
        }
        else
        {
            cout << "No real root" << endl;
        }
    }
    
 return 0;
}