#include <iostream>

using namespace std;

int main()
{
	char A[16] = { ' ' };
	int sub = 0;
	cin >> A;

	for (int i = 0; i < sizeof(A); i++)
	{
		if (A[i] != '\0')
		{
			if (A[i] != 'Z')
			{
				int middle = (A[i] - 'A' + 1);
				if (middle >= 18) sub += (middle - 2) / 3 + 3;
				else sub += ((middle - 1) / 3) + 3;
			}
			else sub += 10;
		}
	}

	cout << sub << "\n";
}