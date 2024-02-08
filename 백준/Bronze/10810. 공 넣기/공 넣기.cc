#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int> Bracket(N);

	while (M--)
	{
		int i, j, k;
		cin >> i >> j >> k;

		for (int l = i - 1; l <= j - 1; l++)
		{
			Bracket[l] = k;
		}
	}

	for (int i : Bracket) cout << i << " ";

	return 0;
}