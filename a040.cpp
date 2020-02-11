#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int is_Armstrong_number (string);

int main(int argc, char const *argv[])
{
	int a, b;

	while (cin >> a >> b)
	{
		bool is_none = true;

		for (int i = a; i <= b; i ++)
		{
			if (is_Armstrong_number(to_string(i)))
			{
				is_none = false;
				cout << i << " ";
			}
		}

		if (is_none)

			cout << "none";
		
		cout << endl;		
	}

	return 0;
}

int is_Armstrong_number (string x)
{
	int x_size = x.size();
	int new_x = stoi(x);
	int sum = 0;

	for (int i = 0; i < x_size; i ++)
	{
		sum += pow(x[i]-'0', x_size);
	}

	if (sum == new_x)

		return 1;

	return 0;
}

