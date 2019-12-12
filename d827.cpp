#include <iostream>
using namespace std;

int main() {

    int s;
    while (cin >> s)
    {
        cout << (s/12)*50+(s%12)*5 << endl;
    }
    
 return 0;
}