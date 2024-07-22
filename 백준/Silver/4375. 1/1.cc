#include <iostream>
#include <string>
using namespace std;

int ONE(int *x)
{
	int remainder = 1 % *x;
	int len = 1;

	while (remainder != 0) {
		remainder = (remainder * 10 + 1) % *x;
		len++;
	}
	return len;
}

int main()
{
	int x;
	while (cin >> x)
	{
		cout << ONE(&x) << "\n";
	}

	return 0;
}