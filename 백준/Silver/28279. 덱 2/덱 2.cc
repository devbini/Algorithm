#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> m_deque;
	int N;
	cin >> N;
	N++;

	while (N--)
	{
		string X;
		getline(cin, X);

		if (X == "3")
		{
			if (m_deque.empty()) cout << "-1\n";
			else {
				cout << m_deque.front() << "\n";
				m_deque.pop_front();
			}
		}
		else if (X == "4")
		{
			if (m_deque.empty()) cout << "-1\n";
			else {
				cout << m_deque.back() << "\n";
				m_deque.pop_back();
			}
		}
		else if (X == "5") cout << m_deque.size() << "\n";
		else if (X == "6") cout << m_deque.empty() << "\n";
		else if (X == "7")
		{
			if (m_deque.empty()) cout << "-1\n";
			else cout << m_deque.front() << "\n";
		}
		else if (X == "8")
		{
			if (m_deque.empty()) cout << "-1\n";
			else cout << m_deque.back() << "\n";
		}
		else if (X[0] == '1') m_deque.push_front(stoi(X.substr(2)));
		else if (X[0] == '2') m_deque.push_back(stoi(X.substr(2)));
	}

	return 0;
}