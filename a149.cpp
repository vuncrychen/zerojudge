#include <iostream>

using namespace std;

int action (string, int);

int main() {

    int enterSize;
    while (cin >> enterSize)
    {
    	while (enterSize > 0)
    	{
    		string target;
    		cin >> target;
    		int result = action(target, target.size()-1);
    		cout << result << endl;
    		enterSize -= 1;
    	}
    	// cout << "over" << endl;
    }
    
 return 0;
}

int action (string target, int targetSize) {

	// cout << "target = " << target <<
	// endl << "targetSize = " << targetSize << endl;

	int temp[targetSize];
	for (int i = 0; i <= targetSize; i ++)
	{
		temp[i] = target[i] - '0';
	}
	int sum = temp[0];
	for (int j = 1; j <= targetSize; j ++)
	{
		sum *= temp[j];
	}

	return sum;
}
