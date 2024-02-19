#include <iostream>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;

	for (int i = 1; i < N + 1; i++)
	{
		int x;
		cin >> x;
		if (x != i) count++;
	}
	cout << count;

	return 0;
}