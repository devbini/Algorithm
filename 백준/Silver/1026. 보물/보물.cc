#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, x, S = 0;
	cin >> N;

	vector<int> A, B;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		A.push_back(x);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		B.push_back(x);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());

	for (int i = 0; i < N; i++) S += A[i] * B[i];
	
	cout << S;

	return 0;
}