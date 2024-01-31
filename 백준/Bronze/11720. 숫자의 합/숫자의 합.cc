#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, sum = 0;
	string input;
	
	cin >> N >> input;

	for (int i = 0; i < input.size(); i++) sum += int(input[i]) - 48;

	cout << sum;

	return 0;
}