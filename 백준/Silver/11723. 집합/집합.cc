#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int M;
	cin >> M;
	int S[21] = { 0 };

	while (M--)
	{
		string x;
		int y;

		cin >> x;

		if (x == "all") { for (int i = 0; i < 21; i++) S[i] = 1; continue; }
		else if (x == "empty") { for (int i = 0; i < 21; i++) S[i] = 0; continue; }

		cin >> y;
		if (x == "add") S[y] = 1;
		else if (x == "remove") S[y] = 0;
		else if (x == "check") cout << S[y] << "\n";
		else if (x == "toggle") S[y] == 1 ? S[y] = 0 : S[y] = 1;
	}

	return 0;
}