#include <iostream>

using namespace std;

int main()
{
    int number = 0, nownumber, count = 0;

    cin >> number;
    nownumber = number;

    do {
        nownumber = ((int)(nownumber % 10) * 10) + (((int)(nownumber / 10) + (int)(nownumber % 10)) % 10);
        count++;
    } while (nownumber != number);

    cout << count;
}