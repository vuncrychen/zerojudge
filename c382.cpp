#include <iostream>
using namespace std;

int main() {

    int x, y;
    char o[2];
    while (cin >> x >> o >> y)
    {
        if (o[0] == '+')
        {
            cout << x+y << endl;
        }
        else if (o[0] == '-')
        {
            cout << x-y << endl;
        }
        else if (o[0] == '*')
        {
            cout << x*y << endl;
        }
        else
        {
            cout << x/y << endl;
        }
    }
    
 return 0;
}