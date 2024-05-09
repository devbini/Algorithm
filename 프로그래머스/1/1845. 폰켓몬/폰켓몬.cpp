#include <set>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	set<int> list = set<int>();
	int ball = nums.size() / 2;
	
	for (int i = 0; i < nums.size(); i++)
	{
		list.insert(nums[i]);
	}

	if (ball >= list.size()) return list.size();
	else return ball;
}