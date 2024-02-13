#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, beforeN = -1;
	cin >> N;
	int Origin = N;
	int count = 0;
	do {
		count++;
		if (N == 0) break;
		beforeN = N % 10 * 10;
		N = (int(floor(N / 10)) + (N % 10)) % 10 + beforeN;
	} while (Origin != N);

	cout << count;

	return 0;
}