#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X;
	vector<int> input;

	cin >> N >> X;

	while (N--)
	{
		int tmp;
		cin >> tmp;
		input.push_back(tmp);
	}

	for (int i : input) if (i < X) cout << i << " ";
	
	return 0;
}