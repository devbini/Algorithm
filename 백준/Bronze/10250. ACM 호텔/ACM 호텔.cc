#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	while (N--)
	{
		int H, W, N;
		cin >> H >> W >> N;

		if (N % H == 0) cout << H;
		else cout << N % H;

		int m = ceil(float(N) / float(H));

		if (m < 10) cout << "0" << m << "\n";
		else cout << m << "\n";
	}

	return 0;
}