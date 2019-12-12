#include <iostream>
using namespace std;

int main() {

    int a, b;
    while (cin >> a >> b)
    {
        if (a > b)
        {
            cout << (100-a)+b << endl;
            continue;
        }
        if (a < b)
        {
            cout << b-a << endl;
            continue;
        }        
        else
        {
            cout << 0 << endl;
            continue;
        }
    }
    
 return 0;
}