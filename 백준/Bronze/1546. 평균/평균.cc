#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<double> list;
	int N, c;
	double sumdata = 0;

	cin >> N;
	c = N;
	while (c--)
	{
		double A;
		cin >> A;
		list.push_back(A);
	}

	double maxdata = *max_element(list.begin(), list.end());

	for (double i : list) sumdata += i / maxdata * 100.0f;
	
	cout.setf(ios::showpoint);
	cout << sumdata / N;
	return 0;
}