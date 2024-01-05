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
		cout << "Case #" << (i + 1) << ": " << result[i] << "\n";
	}
	cout << "Case #" << result.size() << ": " << result[result.size() - 1];

	return 0;
}