#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, totaltime = 0;

	cin >> N;
	vector<int> mlist, mtime;

	while (N--)
	{
		int x;
		cin >> x;
		mlist.push_back(x);
	}
	
	sort(mlist.begin(), mlist.end());

	int plus = 0;
	for (int i : mlist)
	{
		plus += i;
		mtime.push_back(plus);
	};

	for (int i : mtime) totaltime += i;

	cout << totaltime;

	return 0;
}