#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> result = {};
	int Count;
	cin >> Count;
	
	for (int i = 0; i < Count; i++)
	{
		int A, B;
		cin >> A >> B;
		result.push_back(A + B);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}