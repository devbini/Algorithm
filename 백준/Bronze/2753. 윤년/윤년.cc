#include <iostream>

using namespace std;

bool checkint(float input = 0.0f)
{
    if ((int)(input / 4) - input / 4 != 0) return false;
    if ((int)(input / 100) - input / 100 == 0) return false;

    return true;
}

int main()
{
    float year;
    cin >> year;

    if (checkint(year)) cout << "1";
    else if ((int)(year / 400) - year / 400 == 0) cout << "1";
    else cout << "0";

    return 0;
}