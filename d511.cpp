#include <iostream>
using namespace std;

int main() {

    int t[3];
    int big = 0;
    int n = 0;
    int sum = 0;
    int result = 0;
    while (1)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> t[0] >> t[1] >> t[2];
            sum = 0;
            big = 0;
            for (int i = 0; i < 3; i++)
            {
                if (big <= t[i])
                {
                    big = t[i];
                    n = i;
                }
            }
            t[n] = 0;
            for (int i = 0; i < 3; i++)
            {
                sum += t[i];
            }
            if (sum > big)
            {
                result += 1;
                cout << t[0] << " " << t[1] << " " << t[2] << endl;
            }
        }
        cout << result << endl;
        result = 0;
    }
    
 return 0;
}