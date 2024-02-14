#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    stack<pair<int,int>> Top;
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int heigh;
        cin >> heigh;
        
        while (!Top.empty())
        {
            if (heigh < Top.top().second) {
                cout << Top.top().first << " ";
                break;
            }
            Top.pop();
        }
        if (Top.empty()) {
            cout << "0 ";
        }
        Top.push(make_pair(i + 1, heigh));
    }

    return 0;
}