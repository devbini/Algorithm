#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long int n, m;
	cin >> n;

	unordered_map <long long int, int> list;
	while (n--)
	{
		long long int x;
		cin >> x;
		list[x] = 1;
	}

	cin >> m;
	while (m--)
	{
		long long int x;
		cin >> x;
		if (list.find(x) != list.end()) cout << "1\n";
		else cout << "0\n";
	}

	return 0;
}