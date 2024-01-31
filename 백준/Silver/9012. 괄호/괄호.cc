#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();

	while (N--)
	{
		stack<string> vps;
		bool check = true;
		string input;
		cin >> input;

		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == '(') vps.push("(");
			else if (!vps.empty() && vps.top() == "(") vps.pop();
			else {
				check = false;
				break;
			}
		}
		if (check)
		{
			if (vps.empty()) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}