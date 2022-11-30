#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double count, max = 0;
    double append = 0;
    vector<double> mArray = {};

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int A;
        cin >> A;
        mArray.push_back(A);
        if (max < A) max = A;
    }
 
    for (int i = 0; i < mArray.size(); i++)
    {
        append += mArray[i] / max * 100.0f;
    }
    cout << fixed;
    cout.precision(6);

    cout << (double)(append / count);
}