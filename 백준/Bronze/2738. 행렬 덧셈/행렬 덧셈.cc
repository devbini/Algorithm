#include <iostream>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<vector<int>> A;
	int N, M;

	cin >> N >> M;

	for (int l = 0; l < N * 2; l++)
	{
		if (l < N)
		{
			vector<int> tmp;
			for (int i = 0; i < M; i++)
			{
				int tmpi;
				cin >> tmpi;

				tmp.push_back(tmpi);
			}

			A.push_back(tmp);
		}
		else
		{
			for (int i = 0; i < M; i++)
			{
				int tempi;
				cin >> tempi;

				A[l - N][i] = A[l - N][i] + tempi;
			}
		}
	}

	for (vector<int> i : A)
	{
		for (int j : i) cout << j << " ";
		cout << "\n";
	}

	return 0;
}