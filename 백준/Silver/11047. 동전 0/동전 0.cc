#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, count = 0;
	vector<int> list;
	cin >> N >> K;

	while (N--)
	{
		int x;
		cin >> x;
		list.push_back(x);
	}

	reverse(list.begin(), list.end());
	for (int i : list)
	{
		count += K / i;
		K %= i;
	}

	cout << count;
	
	return 0;
}