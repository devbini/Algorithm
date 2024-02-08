#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> Bracket;
	int N, M;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) Bracket.push_back(i);

	while (M--)
	{
		int i, j;
		cin >> i >> j;

		reverse(Bracket.begin() + i-1, Bracket.begin() + j);
	}

	for (int i : Bracket) cout << i << " ";

	return 0;
}