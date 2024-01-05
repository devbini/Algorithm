#include <iostream>
#include <vector>

using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> Alist = vector<int>();
	vector<int> Blist = vector<int>();
	int casecount;
	cin >> casecount;

	while (casecount != 0)
	{
		int A, B;
		cin >> A >> B;
		Alist.push_back(A);
		Blist.push_back(B);
		casecount--;
	}

	for (int i = 0; i < Alist.size() - 1; i++)
	{
		cout << "Case #" << (i + 1) << ": " << Alist[i] << " + " << Blist[i] << " = " << Alist[i] + Blist[i] << "\n";
	}
	cout << "Case #" << (Alist.size()) << ": " << Alist[Alist.size() - 1] << " + " << Blist[Alist.size() - 1] << " = " << Alist[Alist.size() - 1] + Blist[Alist.size() - 1];

	return 0;
}