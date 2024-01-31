#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> result(10, 0);
	int A,B,C, mul = 0;
	cin >> A >> B >> C;
	mul = A * B * C;

	string mulstring = to_string(mul);

	for (char i : mulstring) result[int(i) - 48]++;
	for (int var : result) cout << var << "\n";

	return 0;
}