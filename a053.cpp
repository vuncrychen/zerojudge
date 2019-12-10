#include <iostream>
using namespace std;

int result(int);

int main() {

    int s;
    while (cin >> s)
    {
        switch (result(s))
        {
        case 1:
            cout << s*6 << endl;
            break;
        case 2:
            cout << 60+(s-10)*2 << endl;
            break;
        case 3:
            cout << 80+(s-20) << endl;
            break;
        case 4:
            cout << 100 << endl;
            break;
        default:
            break;
        }
    }
    
 return 0;
}

int result(int a) {
    if (a>=0&&a<=10)
    {
        return 1;
    }
    else if (a>10&&a<=20)
    {
        return 2;
    }
    else if (a>20&&a<=40)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}