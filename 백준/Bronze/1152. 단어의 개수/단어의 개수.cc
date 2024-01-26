#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string input, dummy;
	getline(cin, input);
	stringstream data(input);
	
	int count = 0;

	while (data >> dummy) count++;
	
	cout << count;
}