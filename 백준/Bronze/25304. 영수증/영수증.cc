#include <iostream>

int main()
{
	int All, Count, Result = 0;

	std::cin >> All >> Count;

	for (int i = 0; i < Count; i++)
	{
		int A, B;
		std::cin >> A >> B;
		Result += A * B;
	}

	if (Result == All)	std::cout << "Yes";
	else std::cout << "No";
}