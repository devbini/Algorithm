#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    vector<int> mArray = {};

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int A;
        cin >> A;
        mArray.push_back(A);
    }
    sort(mArray.begin(), mArray.end());
    
    cout << mArray[0] << " " << mArray[mArray.size() - 1];
}