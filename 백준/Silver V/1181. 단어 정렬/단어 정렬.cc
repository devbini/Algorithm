#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
	if (a.size() > b.size()) return 0;
	else if (a.size() == b.size()) return a < b;
	else return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	vector<string> datas;

	int N;
	cin >> N;

	while (N--)
	{
		string x;
		cin >> x;

		if (find(datas.begin(), datas.end(), x) - datas.end() == 0) datas.push_back(x);
	}

	sort(datas.begin(), datas.end(), cmp);
	for (string i : datas) cout << i << "\n";

	return 0;
}