using namespace std;

#include <cmath>
#include <queue>
#include <vector>

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> m_q = queue<int>();

	for (int i = 0; i < progresses.size(); i++)
	{
		int x = ceil((100.f - (float)progresses[i]) / (float)speeds[i]);
		if (m_q.empty())
		{
			m_q.push(x);
		}
		else {
			if (m_q.front() >= x)
			{
				m_q.push(x);
			}
			if (m_q.front() < x) {
				answer.push_back(m_q.size());
				m_q = queue<int>();
				m_q.push(x);
			}
		}
	}

	if (!m_q.empty()) answer.push_back(m_q.size());

	return answer;
}