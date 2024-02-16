#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	while (1)
	{
		int x, y;
		cin >> x >> y;

		if (x == 0 && y == 0) return 0;
		if (x > y) cout << "Yes\n";
		else cout << "No\n";	
	}

	return 0;
}