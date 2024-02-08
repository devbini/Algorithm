#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	vector<int> A;
	
	cin >> N >> M;
	for (int i = 1; i <= N; i++) A.push_back(i);

	while (M--)
	{
		int i, j, tmp = 0;
		cin >> i >> j;

		tmp = A[i-1];
		A[i-1] = A[j-1];
		A[j-1] = tmp;
	}

	for (int i : A) cout << i << " ";
	
	return 0;
}