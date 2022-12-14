#include <iostream>
#include <string>

using namespace std;

string whilecheck(string index, string origin, int count)
{
	string mreturn = origin;
	while (mreturn.find(index) != string::npos)
	{
		mreturn.replace(mreturn.find(index), count, "A");
	}

	return mreturn;
}

int main()
{
	string input;

	cin >> input;

	input = whilecheck("c=", input, 2);
	input = whilecheck("c-", input, 2);
	input = whilecheck("dz=", input, 3);
	input = whilecheck("d-", input, 2);
	input = whilecheck("lj", input, 2);
	input = whilecheck("nj", input, 2);
	input = whilecheck("s=", input, 2);
	input = whilecheck("z=", input, 2);

	cout << input.length();
}