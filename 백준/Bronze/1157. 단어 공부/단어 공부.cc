#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> m_result(26,0);
	int a, b;
	string A;
	cin >> A;

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] > 91) m_result[A[i] - 97]++;
		else m_result[A[i] - 65]++;
	}
	
	int max = *max_element(m_result.begin(), m_result.end());
	int max_index = max_element(m_result.begin(), m_result.end()) - m_result.begin();
	m_result[max_index] = 0;
	if (find(m_result.begin(), m_result.end(), max) == m_result.end())
	{
		int data = max_index + 65;
		cout << (char)data;
	}
	else cout << "?";
}