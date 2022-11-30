#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count, x, result = 0;
	vector<int> inputs;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int A;	
		cin >> A;
			
		inputs.push_back(A);
	}

	cin >> x;

	for (int i = 0; i < inputs.size(); i++)
	{
		if (inputs[i] == x) result++;
	}

	cout << result;
}