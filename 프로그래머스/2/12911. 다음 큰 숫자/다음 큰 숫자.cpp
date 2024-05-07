#include <string>
#include <bitset>

using namespace std;

int F_OwnCHECK(string bit)
{
	int x = 0;
	for (int i = 0; i < bit.size(); i++) if (bit[i] == '1') x++;
	return x;
}

int solution(int n) {
    int x = F_OwnCHECK(bitset<16>(n).to_string());

	for (int i = n+1; i < 1000000; i++) if (x == F_OwnCHECK(bitset<16>(i).to_string())) return i;
}