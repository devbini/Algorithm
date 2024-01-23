#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string F_shuffle(string CHECKING_DATA, int input = -1)
{
	string origin = CHECKING_DATA;
	string A, B;
	int abc = 0;

	do
	{
		A = "";
		B = "";
		for (int i = 0; i < origin.length(); i++)
		{
			if (i % 2 == 0)	A += origin[i];
			else B += origin[i];
		}
		reverse(B.begin(), B.end());
		origin = A + B;
		abc++;
	} while (CHECKING_DATA != origin);

	int count = input % abc;
	while (count != 0)
	{
		A = "";
		B = "";
		for (int i = 0; i < origin.length(); i++)
		{
			if (i % 2 == 0)	A += origin[i];
			else B += origin[i];
		}
		reverse(B.begin(), B.end());
		origin = A + B;
		count--;
	}

	return origin;
}

int main()
{
	int inputcount;
	string inputstring;
	cin >> inputcount >> inputstring;
	cout << F_shuffle(inputstring, inputcount);
}