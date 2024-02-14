#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<int> Lcount, Scount;
    int N, skillcount = 0;
    string A;
    cin >> N >> A;

    for (char i : A)
    {
        if (i >= '1' && i <= '9') skillcount++;
        else if (i == 'L') Lcount.push(1);
        else if (i == 'S') Scount.push(2);
		else if (i == 'R')
		{
			if (!Lcount.empty())
			{
				skillcount++;
				Lcount.pop();
			}
            else break;
        }
        else if (i == 'K')
        {
            if (!Scount.empty())
            {
                skillcount++;
                Scount.pop();
            }
            else break;
        }
    }

    cout << skillcount;

    return 0;
}