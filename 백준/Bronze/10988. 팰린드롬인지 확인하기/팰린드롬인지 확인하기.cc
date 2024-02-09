#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string N, Origin;
	cin >> N;

	Origin = N;
	reverse(N.begin(), N.end());
	
	if (Origin == N) cout << "1";
	else cout << "0";

	return 0;
}