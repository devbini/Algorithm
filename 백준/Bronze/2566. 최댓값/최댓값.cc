#include <iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, y, tmp = -1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int A;
			cin >> A;
			if (A > tmp)
			{
				x = i + 1;
				y = j + 1;
				tmp = A;
			}
		}
	}

	cout << tmp << "\n" << x << " " << y;

	return 0;
}