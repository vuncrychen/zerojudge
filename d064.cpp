#include <iostream>
using namespace std;

int main() {

    int s;
    while (cin >> s)
    {
        if (s%2==0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    
 return 0;
}