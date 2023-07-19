#include <iostream>
#include <string>

using namespace std;

int F_MAX(int a, int b, int c) {
    int result = 0;
    if (a >= b)
    {
        if (a >= c) result = a;
        else result = c;
    }
    else if (b >= c) result = b;
    else result = c;

    return result;
}

int F_EQUAL(int a, int b, int c) {
    int result = 0;

    if (a == b) result = a;
    else if (a == c) result = a;
    else result = b;

    return result;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && a == c && b == c) cout << 10000 + a * 1000;
    else if (a == b || a == c || b == c) cout << 1000 + F_EQUAL(a, b, c) * 100;
    else cout << F_MAX(a, b, c) * 100;

    return 0;
}
