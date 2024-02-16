#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	int N;
	int m_list[10001] = {0};

	cin >> N;

	while (N--)
	{
		int x;
		cin >> x;
		m_list[x]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (m_list[i] != 0)
		{
			for (int j = 0; j < m_list[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}

	return 0;
}