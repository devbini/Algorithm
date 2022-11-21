#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> Input = {0, 0, 0};
	std::vector<int> List = {};
	int result, max = 0;
	std::cin >> Input[0] >> Input[1] >> Input[2];
	sort(Input.begin(), Input.end());

	for (int i = 0; i < Input.size(); i++)
	{
		if (List.size() != 0)
		{
			if (List[0] == Input[i]) List.push_back(Input[i]);
			else if (List.size() == 1) List[0] = Input[i];
		}
		else List.push_back(Input[i]);
		
		if (max < Input[i]) max = Input[i];
	}

	if (List.size() != 1)
	{
		switch (List.size())
		{
		case 2:
			result = 1000 + List[0] * 100;
			break;

		case 3:
			result = 10000 + List[0] * 1000;
			break;
		}

		std::cout << result;
	}
	else std::cout << max * 100;
}