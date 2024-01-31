#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> result(26, -1);

	string S;
	cin >> S;

	for (int i = 0; i < S.size(); i++) if (result[S[i] - 97] == -1) result[S[i] - 97] = i;
	for (int i : result) cout << i << " ";

	return 0;
}