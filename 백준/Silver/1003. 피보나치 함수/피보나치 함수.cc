#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int n) {

	vector<int> zero(41);
	vector<int> one(41);

	zero[0] = 1;
	zero[1] = 0;

	one[0] = 0;
	one[1] = 1;
	
	for (int i = 2; i < 41; i++)
	{
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}

	cout << zero[n] << " " << one[n] << "\n";
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		fibonacci(x);
	}

	return 0;
}