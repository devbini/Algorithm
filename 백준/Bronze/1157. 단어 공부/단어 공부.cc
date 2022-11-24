#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string N;
    char maxstring = ' ', beforestring = ' ';
    int maxindex = 0, beforeindex = 0;
    bool isequrl = false;

    cin >> N;

    for (int i = 0; i < N.size(); i++) { N[i] = toupper(N[i]); }
    sort(N.begin(), N.end());

    if (N.size() != 1)
    {
        for (int i = 0; i < N.size(); i++)
        {
            if (beforestring == N[i]) ++beforeindex;
            else {
                if (maxindex < beforeindex)
                {
                    maxindex = beforeindex;
                    maxstring = beforestring;

                    isequrl = false;
                }
                else if (maxindex == beforeindex) { isequrl = true; }

                beforestring = N[i];
                beforeindex = 1;
            }
        }
        if (maxindex < beforeindex)
        {
            maxindex = beforeindex;
            maxstring = beforestring;

            isequrl = false;
        }
        else if (maxindex == beforeindex) { isequrl = true; }


        if (isequrl) { cout << "?"; return 0; }
        else { cout << maxstring; return 0; }
    }
    else { cout << N[0]; return 0; }
}