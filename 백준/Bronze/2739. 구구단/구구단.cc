#include <iostream>

int main()
{
   int Num;
   std::cin >> Num;

   for (int i = 1; i <= 9; i++)
   {
      std::cout << Num << " * " << i << " = " << Num * i << "\n";
   }
}