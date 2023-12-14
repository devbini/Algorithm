#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (int i = 0; i < queries.size(); i++)
    {
        int max = -1;
        for (int j = queries[i][0]; j < queries[i][1] + 1; j++)
        {
            if (queries[i][2] < arr[j])
            {
                if (max == -1) max = arr[j];
                else if (max > arr[j]) max = arr[j];
            }
        }
        if (max == -1) answer.push_back(-1);
        else answer.push_back(max);
    }
    
    return answer;
}