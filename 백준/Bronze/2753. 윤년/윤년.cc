#include <iostream>

int main()
{
    int Year;

    std::cin >> Year;

    if ((Year % 4) == 0)
    {
        if ((Year % 100) != 0)
        {
            std::cout << "1";
        }
        else if ((Year % 400) == 0)
        {
            std::cout << "1";
        }
        else std::cout << "0";
    }
    else std::cout << "0";
}