#include <iostream>

using namespace std;

int main()
{
	unsigned long long int N, result = 0, tmp = 0;
	cin >> N;

	while (1)
	{
		tmp += result;
		if (tmp > N)
		{
			cout << result - 1;
			return 0;
		}
		result++;
	}

	return 0;
}