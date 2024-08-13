#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int list[] = {1,0,0};

	int n;
	cin >> n;
	while (n--)
	{
		int x, y;
		cin >> x >> y;
		int temp = list[x-1];
		list[x-1] = list[y-1];
		list[y-1] = temp;
	}

	list[0] == 1 ? cout << "1" : list[1] == 1 ? cout << "2" : cout << "3";

	return 0;
}