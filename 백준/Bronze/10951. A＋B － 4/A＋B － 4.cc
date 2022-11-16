#include <iostream>

int main()
{
    int A, B;

    while(true){
        std::cin >> A >> B;
        
        if (std::cin.eof() == true) break;
        std::cout << A + B << std::endl;
    }
}