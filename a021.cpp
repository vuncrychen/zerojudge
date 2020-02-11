#include <iostream>

using namespace std;

void Add(string, string);
void Sub(string, string);
void Mul(string, string);
void Div(string, string);

int main(int argc, char const *argv[])
{
	string x, oprator, y;
	while (cin >> x >> oprator >> y)
	{
		if (oprator == "+")
			Add(x, y);
		else if (oprator == "-")
			Sub(x, y);
		else if (oprator == "*")
			Mul(x, y);
		else
			Div(x, y);
	}

	return 0;
}

void Add(string x, string y)
{
	cout << "x_size: " << x.length() <<
	endl << "y_size: " << y.length() <<
	endl;

}

void Sub(string x, string y)
{
	cout << "hello" << endl;
}

void Mul(string x, string y)
{
	cout << "hello" << endl;
}

void Div(string x, string y)
{
	cout << "hello" << endl;
}
