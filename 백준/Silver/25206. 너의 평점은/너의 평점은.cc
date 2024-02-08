#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count = 20;

	double sum = 0.f, gpa = 0.f;

	while (count--)
	{
		string A, C;
		double B;
		
		cin >> A >> B >> C;
		if (C == "P") continue;

		gpa += B;

		if (C == "A+") sum += B * 4.5f;
		else if (C == "A0") sum += B * 4.0f;
		else if (C == "B+") sum += B * 3.5f;
		else if (C == "B0") sum += B * 3.0f;
		else if (C == "C+") sum += B * 2.5f;
		else if (C == "C0") sum += B * 2.0f;
		else if (C == "D+") sum += B * 1.5f;
		else if (C == "D0") sum += B * 1.0f;
		else if (C == "F") sum += B * 0.f;
	}


	cout.precision(6);
	cout << fixed;
	cout << sum / gpa;
}