#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int value1 = stoi(to_string(a) + to_string(b));
    int value2 = stoi(to_string(b) + to_string(a));
    
    if (value1 >= value2) answer = value1;
    else answer = value2;
    
    return answer;
}