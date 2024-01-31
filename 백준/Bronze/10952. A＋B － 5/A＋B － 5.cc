#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B;

	while (!(cin >> A >> B).eof())
	{
		if (A == 0 && B == 0) return 0;
		else cout << A + B << "\n";
	}

	return 0;
}