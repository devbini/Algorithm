#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Check(vector<char> datas, char now)
{
	vector<char> data = datas;
	for (int i = 0; i < data.size() - 1; i++)
	{
		if (data[i] == now) return false;
	}

	return true;
}

int main()
{
	int count;
	int resultcount = 0;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		bool check = false;
		vector<char> datas;
		string input;
		cin >> input;

		if (input.length() <= 2)
		{
			resultcount++;
		}
		else
		{
			datas.push_back(input[0]);
			datas.push_back(input[1]);
			for (int j = 2; j < input.length(); j++)
			{
				if (input[j - 1] == input[j]) continue;
				else
				{
					if (Check(datas, input[j]))
					{
						datas.push_back(input[j]);
						continue;
					}
					else
					{
						check = true;
						break;
					}
				}
			}
			if (!check) resultcount++;
		}
	}

	cout << resultcount;
}