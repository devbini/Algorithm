#include <iostream>

int main()
{
	int count, jump = 0;

	std::cin >> count;
	jump = count - 1;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j <= count; j++)
		{
			if (jump >= j)
			{
				if (j != 0) std::cout << " ";
			}
			else std::cout << "*";
		}
		jump -= 1;
		if (i == count - 1) break;
		std::cout << "\n";
	}
}