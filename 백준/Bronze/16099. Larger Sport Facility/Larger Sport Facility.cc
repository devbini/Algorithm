#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		long long int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long int tel = x1 * y1;
		long long int eu = x2 * y2;

		if (tel == eu) cout << "Tie\n";
		else tel > eu ? cout << "TelecomParisTech\n" : cout <<"Eurecom\n";
	}

	return 0;
}