#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool first = true;

    while(numbers.size() != 1)
    {
        for (int i = 1; i < numbers.size(); i++)
        {
            if (first)
            {
                first = false;
                answer = numbers[0] * numbers[i];
            }
            else if (answer < numbers[0] * numbers[i]) answer = numbers[0] * numbers[i];
        }
        numbers.erase(numbers.begin());
    }

    return answer;
}