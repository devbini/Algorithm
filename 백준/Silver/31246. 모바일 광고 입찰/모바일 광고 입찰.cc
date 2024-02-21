#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	vector<int> list;
	cin >> N >> K;

	while (N--)
	{
		int A, B;
		cin >> A >> B;

		list.push_back(B - A);
	}
	
	sort(list.begin(), list.end());

	if (list[K - 1] <= 0) cout << "0";
	else cout << list[K - 1];
	
	return 0;
}