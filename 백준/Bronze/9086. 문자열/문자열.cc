#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		string A;
		cin >> A;
		cout << A[0] << A[A.length() - 1] << "\n";
	}
	

	return 0;
}