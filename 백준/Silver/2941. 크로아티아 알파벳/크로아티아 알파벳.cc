#include <iostream>
#include <string>
using namespace std;

string F_Change(string input, string delim)
{
	string dummy = input;
	while (dummy.find(delim) != string::npos)
	{
		dummy.replace(dummy.find(delim), delim.size(), "0");
	}
	return dummy;
}

int main()
{
	string input;

	cin >> input;

	input = F_Change(input, "c=");
	input = F_Change(input, "c-");
	input = F_Change(input, "dz=");
	input = F_Change(input, "d-");
	input = F_Change(input, "lj");
	input = F_Change(input, "nj");
	input = F_Change(input, "s=");
	input = F_Change(input, "z=");
	
	cout << input.size();
}