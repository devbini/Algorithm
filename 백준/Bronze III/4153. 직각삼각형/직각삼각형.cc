#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	while (1)
	{
		vector<int> xyz;
		int x, y, z;
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) return 0;

		xyz.push_back(x);
		xyz.push_back(y);
		xyz.push_back(z);
		sort(xyz.begin(), xyz.end());
		
		if ((xyz[0] * xyz[0]) + (xyz[1] * xyz[1]) == xyz[2] * xyz[2]) cout << "right\n";
		else cout << "wrong\n";
		
	}

	return 0;
}