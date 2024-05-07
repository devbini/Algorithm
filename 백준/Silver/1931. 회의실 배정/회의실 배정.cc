#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<pair<int, int>> x = vector<pair<int, int>>();

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		pair<int, int> z = pair<int,int>();
		cin >> z.first >> z.second;
		
		x.push_back(z);
	}

	sort(x.begin(), x.end());
	sort(x.begin(), x.end(), compare);
	
	int lasttime = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i].first >= lasttime)
		{
			count++;
			lasttime = x[i].second;
		}
	}

	cout << count;
}