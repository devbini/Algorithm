#include <string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
	queue<int> m_q = queue<int>();

	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '(':
			if (m_q.size() == 0 || m_q.front() == 0) m_q.push(0);
			break;
		case ')':
			if (m_q.size() == 0 || m_q.front() != 0) return false;
			else m_q.pop();
			break;
		}
	}

	if (m_q.size() != 0) return false;
    else return true;
}