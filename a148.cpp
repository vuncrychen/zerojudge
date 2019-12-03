#include <iostream>
using namespace std;

int main() {

    int s;
    int c = 0;
    int temp;
    float sum = 0;
    while (cin >> s)
    {
        while (c!=s)
        {
            cin >> temp;
            sum += temp;
            c += 1;
        }
        if (sum/s>59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
        sum = 0;
        c = 0;
    }
    
 return 0;
}