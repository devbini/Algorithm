#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> input;
	int n = 10;
	
	while (n--)
	{
		int tmp;
		cin >> tmp;
		input.insert({ tmp % 42, 0 });
	}
	
	cout << input.size();

	return 0;
}