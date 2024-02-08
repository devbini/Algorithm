#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string A;
	cin >> A;
	sort(A.begin(), A.end(), compare);
	cout << A;
}