#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n,step = 1;
	cin >> n;

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - step; i++) cout << " ";
		for (int i = 0; i < step + j; i++) cout << "*";
		step++;
		cout << "\n";
	}
	step -= 3;
	n -= 1;
	for (int j = n; j > 0; j--)
	{
		for (int i = 0; i < n - step; i++) cout << " ";
		for (int i = 0; i < step + j; i++) cout << "*";
		step--;
		cout << "\n";
	}
	
	return 0;	
}