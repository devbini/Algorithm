#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> result;
	int n;

	cin >> n;

	while (n--)
	{
		int result_x = 0;
		for (int i = 0; i < 10; i++)
		{
			int x;
			cin >> x;
			if (x % 2 != 0) result_x += x;
		}
		result.push_back(result_x);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << "#" << i + 1 << " " << result[i] << "\n";
	}
	
	return 0;
}