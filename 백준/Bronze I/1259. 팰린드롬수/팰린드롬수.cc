#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	while (1)
	{
		string input;
		cin >> input;
		if (input == "0") break;
		
		string origin = input;
		reverse(input.begin(), input.end());
		if (origin == input) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}