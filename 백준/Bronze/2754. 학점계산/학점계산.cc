#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	cout.precision(1);
	cout.setf(ios::fixed);

	string N;
	float gpa = 4.0f;

	cin >> N;

	if (N[0] != 'F')
	{
		gpa -= N[0] - 65;
		if (N[1] == '+') gpa += 0.3f;
		else if (N[1] == '-') gpa -= 0.3f;
	}
	else gpa = 0.0f;

	cout << gpa;

	return 0;
}