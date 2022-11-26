#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	vector<int> result = {};

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int A, B;

		cin >> A >> B;

		result.push_back(A + B);
	}
	
	for (int i = 0; i < result.size(); i++)
	{
		cout << "Case #" << i + 1 << ": " << result[i] << "\n";
	}

	return 0;
}