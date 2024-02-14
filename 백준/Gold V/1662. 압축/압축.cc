#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	stack<int> listup;
	string S;

	cin >> S;

	for (int i = 0; i < S.size(); i++)
	{
		if (S[i + 1] == '(') listup.push(S[i] - 48);
		else if (S[i] == '(') listup.push(-1);
		else if (S[i] == ')') {
			int A = 0;
			while (1)
			{
				if (listup.top() == -1)
				{
					listup.pop();
					A *= listup.top();
					listup.pop();
					listup.push(A);
					break;
				}
				else
				{
					A += listup.top();
					listup.pop();
				}
			}
		}
		else listup.push(1);
	}

	int data = 0;
	while (!listup.empty()) { data += listup.top(); listup.pop(); }

	cout << data;

	return 0;
}