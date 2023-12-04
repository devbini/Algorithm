#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int result1 = a + b + c;
    int result2 = result1 * ((a * a) + (b * b) + (c * c));
    int result3 = result2 * ((a * a * a) + (b * b * b) + (c * c * c));
    
    if (a == b && a == c) return result3;
    else if (a == b || a == c || b == c) return result2;
    else return result1;
}