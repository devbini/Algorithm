#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count = 100;
	while (count--)
	{
		string A;
		getline(cin, A);
		cout << A << "\n";
	}
}