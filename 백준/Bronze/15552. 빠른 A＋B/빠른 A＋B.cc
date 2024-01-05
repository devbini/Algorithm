#include <iostream>
#include <vector>

using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> result = vector<int>();
	int casecount;
	cin >> casecount;

	while (casecount != 0)
	{
		int A, B;
		cin >> A >> B;
		result.push_back(A + B);
		casecount--;
	}

	for (int i = 0; i < result.size() - 1; i++)
	{
		cout << result[i] << "\n";
	}
	cout << result[result.size()-1];

	return 0;
}