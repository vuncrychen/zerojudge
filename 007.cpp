#include <iostream>
using namespace std;

int main() {

    string s;
    string r;
    int k = 7;
    int temp;
    int count = 0;
    while (cin >> s)
    {
        r = s;
        count = 0;
        while (1)
        {
            if (s[count] != '\0')
            {
                temp = s[count];
                temp -= k;
                r[count] = (char)temp;
            }
            else
            {
                break;
            }
            count += 1;
        }
        cout << r << endl;
    }
    
 return 0;
}