#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;
	int N;

	cin >> N;
	cin.ignore();

	while (N--)
	{
		string input;
		getline(cin, input);

		if (input == "pop_front")
		{
			if (dq.empty()) cout << "-1\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (input == "pop_back")
		{
			if (dq.empty()) cout << "-1\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (input == "size") cout << dq.size() << "\n";
		else if (input == "empty") cout << dq.empty() << "\n";
		else if (input == "front")
		{
			if (dq.empty()) cout << "-1\n";
			else cout << dq.front() << "\n";
		}
		else if (input == "back")
		{
			if (dq.empty()) cout << "-1\n";
			else cout << dq.back() << "\n";
		}
		else if (input.substr(5)[0] == 'b') dq.push_back(stoi(input.substr(10)));
		else dq.push_front(stoi(input.substr(11)));
	}

	return 0;
}