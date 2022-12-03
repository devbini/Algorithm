#include <iostream>

using namespace std;

int main()
{
	int num = 0, max = 0;

	for (int i = 0; i < 9; i++)
	{
		int A;
		cin >> A;

		if (max < A)
		{
			max = A;
			num = i + 1;
		}
	}

	cout << max << "\n" << num;
}