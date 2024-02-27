#include <iostream>

using namespace std;

int main()
{
	int score[10];

	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;

		score[i] = x;
	}

	int total = 0;
	int before = 0;

	for (int i = 0; i < 10; i++)
	{
		before = total;
		total += score[i];

		if (total >= 100)
		{
			if (100 - before > total - 100 || 100 - before == total - 100)
			{
				cout << total;
				break;
			}
			else
			{
				cout << before;
				break;
			}
		}
		else if (i == 9) cout << total;
	}

	return 0;
}