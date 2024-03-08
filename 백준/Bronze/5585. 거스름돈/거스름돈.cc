#include <iostream>
using namespace std;

int main() {
	int N, count = 0;
	cin >> N;

	N = 1000 - N;

	while (N != 0)
	{
		if (N >= 500)
		{
			count += N / 500;
			N %= 500;
		}
		if (N >= 100)
		{
			count += N / 100;
			N %= 100;
		}
		if (N >= 50)
		{
			count += N / 50;
			N %= 50;
		}
		if (N >= 10)
		{
			count += N / 10;
			N %= 10;
		}
		if (N >= 5)
		{
			count += N / 5;
			N %= 5;
		}
		if (N >= 0)
		{
			count += N;
			N = 0;
		}
	}

	cout << count;

	return 0;
}