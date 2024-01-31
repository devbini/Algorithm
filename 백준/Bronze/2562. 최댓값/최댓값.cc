#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> N;

	for (int i = 0; i < 9; i++)
	{
		int tmp;
		cin >> tmp;
		N.push_back(tmp);
	}

	int maxdata = *max_element(N.begin(), N.end());
	int maxindex = max_element(N.begin(), N.end()) - N.begin() + 1;

	cout << maxdata << "\n" << maxindex;

	return 0;
}