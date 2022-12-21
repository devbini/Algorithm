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
    int a, b, min = 10001, result = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i != 1 && getsosu(i))
        {
            result += i;
            if (min > i) min = i;
        }
    }

    if (min != 10001) cout << result << "\n" << min;
    else cout << "-1";
}