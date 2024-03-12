#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	vector<int> numlist;
	cin >> T;

	while (T--)
	{
		int N;
		vector<pair<int, int>> list;
		cin >> N;

		while (N--)
		{
			int x, y;
			cin >> x >> y;

			pair<int, int> z;
			z.first = x;
			z.second = y;
			list.push_back(z);
		}

		sort(list.begin(), list.end());

		int count = 1, interviewround = list[0].second;
		for (int i = 1; i < list.size(); i++)
		{
			if (list[i].second < interviewround)
			{
				count++;
				interviewround = list[i].second;
			}
		}
		numlist.push_back(count);
	}

	for (int i : numlist) cout << i << "\n";

	return 0;
}