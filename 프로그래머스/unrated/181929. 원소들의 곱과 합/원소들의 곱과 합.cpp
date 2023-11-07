#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int mux = 1;
    int plus = 0;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        mux *= num_list[i];
        plus += num_list[i];
    }
    
    if (mux < (plus * plus)) return 1;
    else return 0;    
}