#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int height, weight;
	while (cin >> height >> weight)
	{
		int temp[height][weight];
		for (int h = 0; h < height; h ++)
		{
			for (int w = 0; w < weight; w ++)
			{
				cin >> temp[h][w];
			}
		}

		// cout << "done" << endl;

		for (int i = 0; i < weight; i ++)
		{
			for (int j = 0; j < height; j ++)
			{
				cout << temp[j][i] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}