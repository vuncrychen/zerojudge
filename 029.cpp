#include <iostream>
using namespace std;

int main() {

    int num;
    while (cin >> num)
    {
        if (num == 0)
        {
            return 0;
        }
        for (int i = 1; i < num; i++)
        {
            if (i % 7 == 0)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
    
 return 0;
}