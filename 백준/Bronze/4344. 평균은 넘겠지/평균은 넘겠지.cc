#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count;

    cin >> count;

    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < count; i++)
    {
        float Av = 0.0f;
        int All = 0, mcount, up = 0;
        vector<int> List = {};

        cin >> mcount;
        for (int j = 0; j < mcount; j++)
        {
            int A;
            cin >> A;
            All += A;
            List.push_back(A);
        }

        Av = All / mcount;

        for (int j = 0; j < List.size(); j++)
        {
            if (List[j] > Av) up++;
        }

        cout << (up / (float)mcount) * 100.0f << "%" << "\n";
    }
}