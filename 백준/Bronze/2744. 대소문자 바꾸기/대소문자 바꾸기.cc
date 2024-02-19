#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	string N,answer = "";
	cin >> N;
	
	for (char i : N)
	{
		if (i >= 97) answer += (i - 97 + 65);
		else answer += (i + (97 - 65));
	}

	cout << answer;
	return 0;
}