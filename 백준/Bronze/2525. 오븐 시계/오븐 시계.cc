#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int hour, min, flag;
    cin >> hour >> min >> flag;

    if (flag < 59 - min) cout << hour << " " << min + flag;
    else if (hour + floor((flag + min) / 60) < 24) cout << hour + floor((flag + min) / 60) << " " << floor((flag + min) % 60);
    else cout << hour + floor((flag + min) / 60) - 24 << " " << floor((flag + min) % 60);
}