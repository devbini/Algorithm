#include <iostream>

int main()
{
    int H, M, Add, HourAdd;

    std::cin >> H >> M;
    std::cin >> Add;

    if (M + Add >= 60)
    {
        HourAdd = (int)((M + Add) / 60);
        if (H + HourAdd >= 24) H = (H + HourAdd) - 24;
        else H = H + HourAdd;

        M = (M + Add) - (60 * HourAdd);
    }
    else M += Add;

    std::cout << H << " " << M;
}