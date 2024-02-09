#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count = 5;
	vector<string> N;

	while (count--)
	{
		string tmp;
		cin >> tmp;
		N.push_back(tmp);
	}

	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (N[i].length() > j) cout << N[i][j];
		}
	}

	return 0;
}