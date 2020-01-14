#include <iostream>
#include <math.h>
using namespace std;

int is_prime(int);

int main() {

    int s, q;
    int count;
    int m1;
    while (cin >> s >> q)
    {
        count = 0;
        m1 = 0;
        if (s == 1)
            m1 = 1;
        while (1)
        {
            if (s > q)
                break;
            if (is_prime(s))
                count += 1;
            s += 1;
        }
        if (m1)
            count -= 1;
        cout << count << endl;
    }
    
 return 0;
}

int is_prime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}