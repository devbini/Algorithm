#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack<int> datalist;

	int count;

	cin >> count;
	cin.ignore();

	for (int i = 0; i < count; i++)
	{
		string A;
		getline(cin, A);

		if (A == "pop")
		{
			if (datalist.size() != 0)
			{
				cout << datalist.top() << "\n";
				datalist.pop();
			}
			else cout << "-1\n";
		}
		else if (A == "size") cout << datalist.size() << "\n";
		else if (A == "empty")
		{
			if (datalist.size() != 0) cout << "0\n";
			else cout << "1\n";
		}
		else if (A == "top")
		{
			if (datalist.size() != 0)
			{
				cout << datalist.top() << "\n";
			}
			else cout << "-1\n";
		}
		else
		{
			datalist.push(stoi(A.substr(5)));
		}
	}
}