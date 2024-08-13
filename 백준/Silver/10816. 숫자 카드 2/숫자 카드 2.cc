#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	unordered_map <int, int> list(0);

	int n,m;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		list[x]++;
	}

	cin >> m;
	while (m--)
	{
		int x;
		cin >> x;
		cout << list[x] << " ";
	}

	return 0;
}