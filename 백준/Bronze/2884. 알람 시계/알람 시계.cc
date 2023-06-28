#include <iostream>

using namespace std;

int main()
{
    int hour, min;
    cin >> hour >> min;

    if (min >= 45) cout << hour << " " << min - 45;
    else if (hour != 0) cout << hour - 1 << " " << 60 + (min - 45);
    else cout << "23 " << 60 + (min - 45);
    
    return 0;
}