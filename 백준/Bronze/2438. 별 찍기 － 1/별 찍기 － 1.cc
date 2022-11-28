#include <iostream>

using namespace std;

int main()
{
	int Count;

	cin >> Count;

	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		if (i != Count - 1) cout << "\n";
	}
}