#include <iostream>

using namespace std;

int main()
{
	int L, A, B, C, D, maxA, maxB, max;
	cin >> L >> A >> B >> C >> D;

	if ((A % C) != 0) maxA = A / C + 1;
	else maxA = A / C;

	if ((B % D) != 0) maxB = B / D + 1;
	else maxB = B / D;

	if (maxA >= maxB) max = maxA;
	else max = maxB;

	cout << L - max;
}