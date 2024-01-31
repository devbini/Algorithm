#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	int count;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	cin >> count;
	cin.ignore();

	while(count != 0)
	{
		string input;
		getline(cin, input);

		if (input == "pop")
		{
			if (q.size() != 0)
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << "-1\n";
		}
		else if (input == "size") cout << q.size() << "\n";
		else if (input == "empty")
		{
			if (q.size() != 0) cout << "0\n";
			else cout << "1\n";
		}
		else if (input == "front")
		{
			if (q.size() != 0) cout << q.front() << "\n";
			else cout << "-1\n";
		}
		else if (input == "back")
		{
			if (q.size() != 0) cout << q.back() << "\n";
			else cout << "-1\n";
		}
		else q.push(stoi(input.substr(5)));

		count--;
	}
}