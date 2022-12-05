#include <iostream>
#include <vector>

using namespace std;

bool Check(float Percent, vector<double> List)
{
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i] == Percent)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	vector<double> List = {};

	for (int i = 0; i < 10; i++)
	{
		int A;
		cin >> A;

		if (Check((float)(A % 42), List))
		{
			List.push_back(A % 42);
		}
	}

	cout << List.size();
}