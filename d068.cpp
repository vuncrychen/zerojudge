#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    while (cin >> i)
    {
        if (i <= 50)
        {
            cout << i << endl;
        }
        else
        {
            cout << i-1 << endl;
        }
        
    }

    return 0;
}
