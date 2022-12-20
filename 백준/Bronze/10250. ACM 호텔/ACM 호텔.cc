#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count = 0;
    vector<int> result = {};

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int H, W, N;
        int sub, sub1;

        cin >> H >> W >> N;

        if (N % H != 0) sub = N / H + 1;
        else sub = N / H;

        if (N % H != 0) sub1 = N % H * 100;
        else sub1 = H * 100;

        result.push_back(sub + sub1);
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1) cout << "\n";
    }
}