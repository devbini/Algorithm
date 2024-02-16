#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int N, nownum = 1;
	cin >> N;
	stack<int> m_memory;
	vector<string> m_resulttest;
	
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;

		for (int j = nownum; j <= N+1; j++)
		{
			nownum = j;

			if (m_memory.empty())
			{
				m_memory.push(j);
				m_resulttest.push_back("+");
			}
			else if (m_memory.top() == x)
			{
				m_memory.pop();
				m_resulttest.push_back("-");
				break;
			}
			else if (j > x)
			{
				cout << "NO";
				return 0;
			}
			else {
				m_memory.push(j);
				m_resulttest.push_back("+");
			}
		}
	}

	for (string i : m_resulttest) cout << i << "\n";

	return 0;
}