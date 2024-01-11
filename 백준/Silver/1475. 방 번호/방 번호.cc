#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	vector<int> m_Set(10,0);
	
	int N;
	cin >> N;

	while (N != 0)
	{
		m_Set[N % 10]++;
		N /= 10;
	}
	
	m_Set[6] = round(float((m_Set[6] + m_Set[9])) / 2);

	int Setcount = *max_element(m_Set.begin(), m_Set.end() - 1);
	cout << Setcount;
}