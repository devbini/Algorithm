#include <iostream>

using namespace std;

int main()
{
    double A, B;

    cin >> A >> B;

    std::cout << fixed;
    std::cout.precision(12);

    cout << A / B;
}