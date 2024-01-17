#include <iostream>
using namespace std;

int main()
{
	long long int n;
	
	while (cin >> n)
	{
		long long int p = 1;
		while (true)
		{
			p *= 9;
			if (p >= n)
			{
				cout << "Baekjoon wins.\n";
				break;
			}
			p *= 2;
			if (p >= n)
			{
				cout << "Donghyuk wins.\n";
				break;
			}
		}
	}
}