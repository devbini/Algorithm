#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int N, totallv = 0, ev = 0;
    vector<int> levellist;
    cin >> N;

    while (N--)
    {
        int L;
        cin >> L;
        levellist.push_back(L);
    }

    sort(levellist.begin(), levellist.end());
    reverse(levellist.begin(), levellist.end());

    for (int i = 0; i < 42; i++)
    {
        if (i == levellist.size()) break;
        else
        {
            if (levellist[i] >= 250) ev += 5;
            else if (levellist[i] >= 200) ev += 4;
            else if (levellist[i] >= 140) ev += 3;
            else if (levellist[i] >= 100) ev += 2;
            else if (levellist[i] >= 60) ev += 1;

            totallv += levellist[i];
        }
    }

    cout << totallv << " " << ev;
    return 0;
}