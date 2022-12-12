#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> result(26, -1);
	char input[101] = { -1 };

	cin >> input;

	for (int i = 0; i < sizeof(input); i++)
	{
		if (input[i] == '\0') break;

		int subway = input[i] - 'a';
		if (result[subway] == -1)
		{
			result[subway] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		int sub = result[i];
		cout << sub;

		if (i != 25) cout << " ";
	}
}