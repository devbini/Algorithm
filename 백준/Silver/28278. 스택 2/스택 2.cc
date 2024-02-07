#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> m_STACK;
	int N;
	cin >> N;
	cin.ignore();

	while (N--)
	{
		string x;
		getline(cin, x);
		
		if (x == "2") {
			if (!m_STACK.empty())
			{
				cout << m_STACK.top() << "\n";
				m_STACK.pop();
			}
			else cout << "-1\n";
		}
		else if (x == "3") cout << m_STACK.size() << "\n";
		else if (x == "4") cout << m_STACK.empty() << "\n";
		else if (x == "5") {
			if (!m_STACK.empty()) cout << m_STACK.top() << "\n";
			else cout << "-1\n";
		}
		else {
			string A = x.substr(2);
			m_STACK.push(stoi(A));
		}
	}

	return 0;
}