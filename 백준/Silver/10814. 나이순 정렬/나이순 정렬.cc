#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    vector<pair<int, string>> input;
    int N;

    cin >> N;

    while (N--)
    {
        int A;
        string B;
        pair<int, string> pairinputdata;

        cin >> A >> B;
        pairinputdata.first = A;
        pairinputdata.second = B;
        input.push_back(pairinputdata);
    }

    stable_sort(input.begin(), input.end(), compare);

    for (pair<int, string> i : input) {
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}