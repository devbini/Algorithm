#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	vector<int> results;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		string OX;
		int result = 0, Add = 0;
		cin >> OX;

		if (OX[0] == 'O')
		{
			result++;
			Add++;
		}
		for (int j = 1; j < OX.size(); j++)
		{
			if (OX[j] == 'X') Add = 0;
			else
			{
				result += 1 + Add;
				Add++;
			}
		}

		results.push_back(result);
	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i];
		if (i != results.size() - 1) cout << "\n";
	}
}