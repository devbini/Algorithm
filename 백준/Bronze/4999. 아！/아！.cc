#include <iostream>
#include <string>

using namespace std;

int main()
{
	string N, Doctor;
	
	cin >> N >> Doctor;

	if (N.size() >= Doctor.size()) cout << "go";
	else cout << "no";

	return 0;
}