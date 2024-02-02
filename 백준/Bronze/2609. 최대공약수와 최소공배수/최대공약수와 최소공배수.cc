#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y;

	int mul = x * y;
	do 
	{
		z = x % y;
		x = y;
		y = z;
	} while (z != 0);

	cout << x << "\n" << mul / x;

	return 0;
}