#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;

	int beforeindex = -500, count = 1;
	for (char i : S)
	{
		int nowindex = i - 65 - beforeindex;
		if (nowindex != 0 && (nowindex == -1 || nowindex == 1))
		{
			if (count + 1 == 5)
			{
				cout << "YES";
				return 0;
			}
			count++;
		}
		else count = 1;
		beforeindex = i - 65;
	}
	
	cout << "NO";

	return 0;
}