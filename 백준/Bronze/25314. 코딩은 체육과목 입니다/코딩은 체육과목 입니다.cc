#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    string defaultdata = "int";
    cin >> n;

    for (int i = 0; i < n / 4; i++)
    {
        defaultdata = "long " + defaultdata;
    }

    cout << defaultdata;

    return 0;
}