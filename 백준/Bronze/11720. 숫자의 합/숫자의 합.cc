#include <iostream>

using namespace std;

int main()
{
	int sum = 0, count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		char Init;
		cin >> Init;
		
		sum += Init - 48;
	}

	cout << sum;
}