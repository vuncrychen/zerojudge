#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int s;
	while (cin >> s)
	{
		cout << s*(s-1)+2 << endl;
	}

	return 0;
}