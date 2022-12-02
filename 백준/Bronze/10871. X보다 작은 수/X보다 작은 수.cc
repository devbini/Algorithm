#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count, max;
	vector<int> inputs = {};

	cin >> count >> max;

	for (int i = 0; i < count; i++)
	{
		int A;
		cin >> A;
		if (max > A) inputs.push_back(A);
	}

	for (int i = 0; i < inputs.size(); i++)
	{
		cout << inputs[i] << " ";
	}
}