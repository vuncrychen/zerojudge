#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int is_prime(int);

int main() {

    int a;
    while (cin >> a)
    {
        for (int j = 2; j <= a; j++)
        {
            if (is_prime(j))
            {
                cout << j << ", ";
            }
        }
    }
    
 return 0;
}

int is_prime(int a){
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}