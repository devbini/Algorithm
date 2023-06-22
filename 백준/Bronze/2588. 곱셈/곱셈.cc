#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	vector<int> mresult(4);
	int a, b;

	cin >> a >> b;
	
	mresult[0] = a * int(b % 10);
 	mresult[1] = a * int(floor(b % 100 / 10));
	mresult[2] = a * int(floor(b / 100)); 
	mresult[3] = mresult[0] + mresult[1] * 10 + mresult[2] * 100;

	cout << mresult[0] << endl << mresult[1] << endl << mresult[2] << endl << mresult[3];

	return 0;
}