#include <iostream>

using namespace std;

bool getsosu(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0) return false;
    }

    return true;
}

int main()
{
    int count, result = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int a;

        cin >> a;

        if (a != 1 && getsosu(a)) result++;
    }

    cout << result;
}