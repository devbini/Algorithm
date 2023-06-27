#include <iostream>

using namespace std;

int main()
{
    int count;

    cin >> count;

    if (count <= 100 && count >= 90) cout << "A";
    else if (count >= 80) cout << "B";
    else if (count >= 70) cout << "C";
    else if (count >= 60) cout << "D";
    else cout << "F";
    
    return 0;
}