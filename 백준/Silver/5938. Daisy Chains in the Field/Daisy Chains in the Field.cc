#include <iostream>
#include <vector>
using namespace std;

vector<bool> visit;

void DFS(int target, vector<vector<int>> &graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[target][i] == 1 && !visit[i])
        {
            visit[i] = true;
            DFS(i, graph);
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;
    visit.resize(n,false);
    vector<vector<int>> graph (n, vector<int>(n, 0));

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        graph[x - 1][y - 1] = 1;
        graph[y - 1][x - 1] = 1;
    }

    visit[0] = true;
    DFS(0, graph);

    bool isit = false;
    for (int i = 0; i < visit.size(); i++)
    {
        if (visit[i] == false)
        {
            isit = true;
            cout << i + 1 << "\n";
        }
    }
    if (!isit) cout << "0";

    return 0;
}