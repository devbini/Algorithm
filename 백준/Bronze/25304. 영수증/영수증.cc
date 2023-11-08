#include <iostream>
using namespace std;

int main() {
    
    int AllPrice, count, calcprice = 0;

    cin >> AllPrice >> count;

    for (int i = 0; i < count; i++)
    {
        int x, y;
        cin >> x >> y;
        calcprice += x * y;
    }

    if (AllPrice == calcprice) cout << "Yes";
    else cout << "No";

    return 0;
}