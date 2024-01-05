#include <iostream>
#include <vector>

using namespace std;

int getselfnumber(int number)
{
	int result = number;
	int whiler = number;

	while (whiler != 0)
	{
		result += whiler % 10;
		whiler /= 10;
	}

	return result;
}

int main()
{
	vector<bool> result = vector<bool>(10001);

	for (int i = 0; i < 10001; i++)
	{
		result[getselfnumber(i)] = true;
	}

	for (int j = 0; j < result.size(); j++)
	{
		if (!result[j]) cout << j << "\n";
	}
}