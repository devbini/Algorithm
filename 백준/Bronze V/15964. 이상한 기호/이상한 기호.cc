#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	long long int A, B;
	cin >> A >> B;

	cout << (A + B) * (A - B);

	return 0;
}