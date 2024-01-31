#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	vector<int> list;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		list.push_back(tmp);
	}

	cout << *min_element(list.begin(), list.end()) << " " << *max_element(list.begin(), list.end());

	return 0;
}