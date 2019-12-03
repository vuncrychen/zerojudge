#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int is_all_zero(string);
void reverse(int, string);

int main() {

    string s;
    while (cin >> s)
    {
        reverse(s.length(), s);
    }
    
 return 0;
}

int is_all_zero(string a){
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '0')
        {
            return 0;
        }
    }
    return 1;
}

void reverse(int s, string a){
    char temp[s+1];
    memset(temp, 0, s+1);
    for (int i = 0; i < s; i++)
        temp[i] = a[(s-1)-i];
    // cout << temp << endl;
    if (is_all_zero(temp))
    {
        cout << "0" << endl;
        return;
    }
    char *p = temp;
    for (int i = 0; i < s+1; i++)
    {
        if (*p == '0')
        {
            p += 1;
        }
        else
        {
            break;
        }
    }
    cout << p << endl;
}