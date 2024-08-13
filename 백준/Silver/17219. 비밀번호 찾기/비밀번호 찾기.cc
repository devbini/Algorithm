#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	unordered_map <string, string> list;
	int n, m;
	cin >> n >> m;

	while (n--)
	{
		string x, y;
		cin >> x >> y;
		list[x] = y;
	}

	while (m--)
	{
		string x;
		cin >> x;
		cout << list[x] << "\n";
	}

	return 0;
}