#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	while (1)
	{
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) return 0;
		if (x < y && y % x == 0) cout << "factor\n";
		else if (x > y && x % y == 0) cout << "multiple\n";
		else cout << "neither\n";
	}

	return 0;
}