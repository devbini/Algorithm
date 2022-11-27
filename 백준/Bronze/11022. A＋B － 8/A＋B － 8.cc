#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	vector<int> RA = {}, RB = {};

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int A, B;

		cin >> A >> B;

		RA.push_back(A);
		RB.push_back(B);
	}
	
	for (int i = 0; i < RA.size(); i++)
	{
		cout << "Case #" << i + 1 << ": " << RA[i] << " + " << RB[i] << " = " << RA[i] + RB[i] << "\n";
	}

	return 0;
}