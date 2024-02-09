#include <iostream>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> mWhite = {1, 1, 2, 2, 2, 8};
	
	for (int i = 0; i < 6; i++)
	{
		int A;
		cin >> A;
		mWhite[i] = mWhite[i] - A;
	}
	
	for (int i : mWhite) cout << i << " ";

	return 0;
}