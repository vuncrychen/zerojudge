#include <iostream>
using namespace std;

int main() {

    int size;
    int t1, t2, t3, t4, t5;
    while (cin >> size)
    {
        for (int i = 0; i < size; i++)
        {
            cin >> t1 >> t2 >> t3 >> t4;
            if (t2-t1 == t3-t2)
            // 等差數列
            {
                t5 = t4+(t2-t1);
            }
            else
            // 等比數列
            {
                t5 = t4*(t2/t1);
            }
            cout << t1 << " "
                 << t2 << " "
                 << t3 << " "
                 << t4 << " "
                 << t5 << endl;    
        }
    }
    
 return 0;
}