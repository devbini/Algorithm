#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> student(30,-1);
	
	for (int i = 0; i < 28; i++)
	{
		int n;
		cin >> n;
		student[n - 1] = 1;
	}

	for (int i = 0; i < student.size(); i++) if (student[i] == -1) cout << i + 1 << "\n";

	return 0;
}