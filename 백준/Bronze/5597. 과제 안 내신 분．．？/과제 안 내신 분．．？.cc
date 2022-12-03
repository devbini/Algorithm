#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> List = { 1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	
	for (int i = 0; i < 28; i++)
	{
		int A;
		cin >> A;

		for (int j = 0; j < List.size(); j++)
		{
			if (List[j] == A)
			{
				List.erase(List.begin() + j);
				break;
			}
		}
	}

	if (List[0] > List[1]) { cout << List[1] << "\n" << List[0]; }
	else { cout << List[0] << "\n" << List[1]; }
}