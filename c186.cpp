#include <iostream>
using namespace std;

int main() {

    string s;
    int c = 0;
    while (getline(cin, s))
    {
        while (s[c] != '\0')
        {
            if (s[c] != ' ')
            {
                cout << s[c];
            }
            else
            {
                cout << endl;
            }
            c += 1;
        }
    }
    
 return 0;
}