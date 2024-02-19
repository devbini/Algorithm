#include <iostream>

using namespace std;

int main()
{
	int count, c = 0, n = 0;

	cin >> count;

	while (count--)
	{
		int x;
		cin >> x;
		if (x == 0) n++;
		else c++;
	}

	if (c > n) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";

	return 0;
}