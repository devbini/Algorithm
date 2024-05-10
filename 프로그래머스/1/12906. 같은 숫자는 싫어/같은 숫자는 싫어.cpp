#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
	vector<int> answer = vector<int>();
	stack<int> answerx = stack<int>();

	for (int i : arr) if (answerx.empty() || answerx.top() != i) { answerx.push(i); answer.push_back(i); }

	return answer;
}