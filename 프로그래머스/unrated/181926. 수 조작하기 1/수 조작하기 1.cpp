#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (int i = 0; i < control.length(); i++)
    {
        string now = control.substr(i, 1);
        if (now == "w") n += 1;
        else if (now == "s") n -= 1;
        else if (now == "d") n += 10;
        else if (now == "a") n -= 10;
    }
    
    return n;
}