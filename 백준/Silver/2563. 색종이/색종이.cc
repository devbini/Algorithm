#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int m_paper_count;

	vector<vector<bool>> m_whiteboard(100);
	for (int i = 0; i < 100; i++) {
		m_whiteboard[i].resize(100, false);
	}
	
	cin >> m_paper_count;

	while (m_paper_count != 0)
	{
		int x = 0, y = 0;
		cin >> x >> y;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				m_whiteboard[y + i][x + j] = true;
			}	
		}

		m_paper_count--;
	}

	int area = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (m_whiteboard[i][j]) area++;
		}
	}

	cout << area;
}