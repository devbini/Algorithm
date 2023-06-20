#include <iostream>

using namespace std;

bool gethan(int input)
{
   int a, b, c;
   a = input / 100;
   b = input / 10 % 10;
   c = input % 10;

   if (a - b == b - c) return true;
   else return false;
}

int main()
{
   int input, a, b, c, count = 99;
   cin >> input;

   if (input < 100) { cout << input; }
   else if (input >= 1000) { cout << "144"; }
   else 
   {
      for (int i = 100; i <= input; i++)
      {
         if (gethan(i)) { count++; }
      }

      cout << count;
   }
}