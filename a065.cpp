#include <iostream>
using namespace std;

int main() {

    string s;
    int s_length;
    while (cin >> s)
    {
        s_length = s.length();
        for (int i = 0; i < s_length; i++)
        {
            for (int j = i+1; j < s_length; j++)
            {
                cout << abs(s[i]-s[j]);
                break;
            }
        }
        cout << endl;
    }
    
 return 0;
}