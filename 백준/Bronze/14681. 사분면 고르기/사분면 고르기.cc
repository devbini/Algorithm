#include <iostream>

int main()
{
    int A, B, result;

    std::cin >> A >> B;

    if (A > 0)
    {
        if (B > 0) result = 1;
        else result = 4;
    }
    else 
    {
        if (B > 0) result = 2;
        else result = 3;
    }

    std::cout << result;
}