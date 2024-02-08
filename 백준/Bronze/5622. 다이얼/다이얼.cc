#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string A;
	cin >> A;

	int sum = 0;

	for (char i : A)
	{
		if (i >= 80) // PQRS TUV WXYZ
		{
			switch (i - 80)
			{
			case 0:
			case 1:
			case 2:
			case 3:
				sum += 8;
				break;

			case 4:
			case 5:
			case 6:
				sum += 9;
				break;

			case 7:
			case 8:
			case 9:
			case 10:
				sum += 10;
				break;
			}
		}
		else 
		{
			sum += 2 + int(ceil(double(i - 64) / 3.0f));
		}
	}

	cout << sum;
}