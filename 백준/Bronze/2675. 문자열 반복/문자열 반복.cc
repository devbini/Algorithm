#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;

	cin >> T;

	while (T--)
	{
		int R;
		string S, builder = "";

		cin >> R >> S;

		for (int i = 0; i < S.size(); i++)
		{
			for (int j = 0; j < R; j++) builder += S[i];
		}

		cout << builder << "\n";
	}

	return 0;
}