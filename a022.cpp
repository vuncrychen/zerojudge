#include <iostream>
#include <algorithm>
using namespace std;

int is_palindrome(string);

int main() {

    string s;
    while (cin >> s)
    {
        if (is_palindrome(s))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

 return 0;
}

int is_palindrome(string a){
    char diff_a[501], diff_b[501];
    int len = a.length()/2;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        diff_a[i] = a[i];
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < len; i++)
    {
        diff_b[i] = a[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (diff_a[i] == diff_b[i])
        {
            count += 1;
        }
    }
    if (count == len)
    {
        return 1;
    }
    return 0;
}