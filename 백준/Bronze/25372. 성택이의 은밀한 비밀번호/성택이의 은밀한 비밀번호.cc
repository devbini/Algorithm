#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int count;
    vector<string> result;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string input;
        cin >> input;
        if (input.length() >= 6 && input.length() <= 9) result.push_back("yes");
        else result.push_back("no");
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (result.size() - 1 != i) cout << "\n";
    }

    return 0;
}