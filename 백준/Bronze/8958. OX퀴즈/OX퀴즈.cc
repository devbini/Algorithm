#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	while (N--) {
		int mul = 0, sum = 0;
		string OX;
		cin >> OX;

		for (int i = 0; i < OX.size(); i++)
		{
			if (OX[i] == 'O')
			{
				sum += 1 + mul;
				mul++;
			}
			else mul = 0;
		}

		cout << sum << "\n";
	}

	return 0;
}