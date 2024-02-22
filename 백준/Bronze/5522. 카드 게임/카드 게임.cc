#include <iostream>
using namespace std;

int main() {
	int price = 0;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		price += x;
	}
	
	cout << price;

	return 0;
}