#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> result = {};
	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a;
		char b[21];
		string sub = "";
		
		cin >> a >> b;

		for (int j = 0; j < sizeof(b); j++)
		{
			if (b[j] != '\0' && b[j] != -52)
			{
				string sub2 = "";
				for (int k = 0; k < a; k++)
				{
					sub2 += b[j];
				}
				sub += sub2;
			}
			else break;
		}
		result.push_back(sub);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1) cout << "\n";
	}
}