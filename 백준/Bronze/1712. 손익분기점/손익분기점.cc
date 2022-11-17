#include <iostream>

int main()
{
    int A, B, V;

    std::cin >> A >> B >> V;

    if (B > V || B == V) std::cout << "-1";
    else std::cout << A / (V - B) + 1;
}