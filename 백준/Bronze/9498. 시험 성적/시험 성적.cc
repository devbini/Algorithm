#include <iostream>

int main()
{
    int Score;

    std::cin >> Score;

    if (Score >= 90) std::cout << "A";
    else if (Score >= 80) std::cout << "B";
    else if (Score >= 70) std::cout << "C";
    else if (Score >= 60) std::cout << "D";
    else std::cout << "F";
}