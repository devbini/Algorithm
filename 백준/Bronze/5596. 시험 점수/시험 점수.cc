#include <iostream>

using namespace std;

int main()
{
	int result1 = 0, result2 = 0;

	for (int i = 0; i < 4; i++)
	{
		int A;
		cin >> A;
		result1 += A;
	}

	for (int i = 0; i < 4; i++)
	{
		int A;
		cin >> A;
		result2 += A;
	}

	if (result1 == result2 || result1 > result2) cout << result1;
	else cout << result2;
}