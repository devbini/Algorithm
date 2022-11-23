#include <iostream>
#include <vector>

int main()
{
	int mCount;

	std::cin >> mCount;

	std::vector<int> minputA(mCount), minputB(mCount);

	for (int i = 0; i < mCount; i++)
	{
		std::cin >> minputA[i] >> minputB[i];
	}

	for (int i = 0; i < mCount; i++)
	{
		std::cout << minputA[i] + minputB[i] << "\n";
	}
}