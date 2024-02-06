#include <iostream>
using namespace std;

int main() {
	int origin[10], result = 0, A = 0, B = 0;

	for (int i = 0; i < 10; i++) cin >> origin[i];

	for (int i : origin)
	{
		result += i;
		if (result >= 100)
		{
			B = result;
			break;
		}
		else A = result;
	}
	if (100 - A < B - 100 || B == 0) cout << A;
	else cout << B;
}