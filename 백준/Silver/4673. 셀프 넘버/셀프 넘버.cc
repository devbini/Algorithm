#include <iostream>

int solution(int d)
{
	int result = d, i = d;

	if (d >= 10000) { result += i / 10000; i %= 10000; }
	if (d >= 1000) { result += i / 1000; i %= 1000; }
	if (d >= 100) { result += i / 100; i %= 100; }
	if (d >= 10) { result += i / 10; i %= 10; }
	result += i;

	return result;
}

int main()
{
	int D[10001] = { 0 };

	for (int i = 1; i <= 10000; i++)
	{
		if (solution(i) <= 10000) D[solution(i)] = 1;
		if (!D[i]) std::cout << i << "\n";	
	}
}