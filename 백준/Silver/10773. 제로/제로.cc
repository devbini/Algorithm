#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> datalist;
	int count, result = 0;

	cin >> count;

	while (count--)
	{
		int input;
		cin >> input;
		if (input != 0) datalist.push(input);
		else datalist.pop();
	}

	while (!datalist.empty())
	{
		result += datalist.top();
		datalist.pop();
	}

	cout << result;
}