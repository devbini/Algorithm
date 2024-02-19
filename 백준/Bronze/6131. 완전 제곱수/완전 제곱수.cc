#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;

	for (int i = 1; i < 501; i++)
	{
		double a = sqrt(pow(i, 2) + N);
		if (a - (int)a != 0) continue;
		else count++;
	}
	
	cout << count;

	return 0;
}