#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	cout << x + y - z << "\n" << stoi(to_string(x) + to_string(y)) - z;

	return 0;
}