#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,V,count = 0;
	vector<int> A;
	
	cin >> N;
	while (N--)
	{
		int x;
		cin >> x;
		A.push_back(x);
	}
	cin >> V;

	for (int i : A) if (i == V) count++;
	cout << count;
	return 0;
}