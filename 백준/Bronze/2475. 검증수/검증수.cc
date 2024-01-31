#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int KOI = 0;

	for (int i = 0; i < 5; i++)
	{
		int tmp;
		cin >> tmp;
		KOI += tmp * tmp;
	}
	cout << KOI % 10;

	return 0;
}