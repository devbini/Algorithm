#include <iostream>
#include <string>
#include <stack>

using namespace std;

// ( = -1 [ = -2
int F_Solution(string data)
{
    stack<int> N;
    int price = 0;

    for (char i : data)
    {
        if (i == '(') N.push(-1);
        else if (i == '[') N.push(-2);
        else if (N.empty()) return 0;
        else if (i == ')')
        {
            if (N.top() == -2) return 0;
            if (N.top() == -1) {
                N.pop();
                N.push(2);
            }
            else {
                int tmp = 0;
                while (!N.empty() && N.top() != -1)
                {
                    tmp += N.top();
                    N.pop();
                }
                if (N.empty()) return 0;
                else {
                    N.pop();
                    N.push(tmp * 2);
                }
            }
        }
        else if (i == ']')
        {
            if (N.top() == -1) return 0;
            if (N.top() == -2) {
                N.pop();
                N.push(3);
            }
            else {
                int tmp = 0;
                while (!N.empty() && N.top() != -2)
                {
                    tmp += N.top();
                    N.pop();
                }
                if (N.empty()) return 0;
                else {
                    N.pop();
                    N.push(tmp * 3);
                }
            }
        }
    }

    while (!N.empty())
    {
        if (N.top() == -1 || N.top() == -2) return 0;
        else
        {
            price += N.top();
            N.pop();
        }
    }

    return price;
}

int main()
{
	string data;

	cin >> data;
	cout << F_Solution(data) << "\n";

	return 0;
}