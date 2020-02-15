#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int temp;
    while (scanf("%d", &temp) != EOF)
    {
        vector<int> numBox;
        for (int i = 0; i < temp; i ++)
        {
            int mem;
            scanf("%d", &mem);
            numBox.push_back(mem);
        }

        sort(numBox.begin(), numBox.end());

        for (int j = 0; j < temp; j ++)
        {
            printf("%d ", numBox.at(j));
        }
    }

    return 0;
}
