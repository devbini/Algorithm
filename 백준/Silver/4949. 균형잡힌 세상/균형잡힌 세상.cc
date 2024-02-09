#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin.ignore();

	while (1)
	{
		stack<int> balance = {};
		bool error = false;
		string data;
		getline(cin, data);

		if (data == ".") break;
		for (char i : data)
		{
			if (i == '(') balance.push(-1);
			else if (i == '[') balance.push(-2);
			else if (i == ')')
			{
				if (!balance.empty() && balance.top() == -1) balance.pop();
				else
				{
					error = true;
					break;
				}
			}
			else if (i == ']')
			{
				if (!balance.empty() && balance.top() == -2) balance.pop();
				else
				{
					error = true;
					break;
				}
			}
		}
		
		if (balance.size() != 0 || error) cout << "no\n";
		else cout << "yes\n";
	}

	return 0;
}