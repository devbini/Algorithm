#include <iostream>

using namespace std;

int main()
{
	int input, dan = 0;
	int count = 1;

	cin >> input;

	while(1)
	{
		count += dan * 6;
		if (count >= input) break;
		else dan++;
	}

	cout << dan + 1;
}