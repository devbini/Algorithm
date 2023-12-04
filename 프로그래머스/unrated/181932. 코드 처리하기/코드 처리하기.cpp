#include <string>
#include <vector>

using namespace std;

bool checkeven(int index) {
    return index % 2 == 0;
}

string solution(string code) {
    string answer = "";
    int mode = 0;

    for (int i = 0; i < code.size(); i++)
    {
        if (code.substr(i,1) == "1")
        {
            if (mode == 0) mode = 1;
            else mode = 0;
            continue;
        }

        if (mode == 0)
        {
            if (checkeven(i)) answer += code.at(i);
        }
        else
        {
            if (!checkeven(i)) answer += code.at(i);
        }
    }

    if (answer == "") return "EMPTY";
    else return answer;
}