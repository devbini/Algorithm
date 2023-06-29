#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> input;
    vector<string> ac = {"1", "2", "3", "4", "5", "6", "7", "8"};
    vector<string> dc = {"8", "7", "6", "5", "4", "3", "2", "1"};
    for (int i = 0; i < 8; i++)
    {
        int minput;
        cin >> minput;
        input.push_back(to_string(minput));
    }

    if (ac == input) cout << "ascending";
    else if (dc == input) cout << "descending";
    else cout << "mixed";

    return 0;
}