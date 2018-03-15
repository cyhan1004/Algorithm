#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <algorithm>

using namespace std;
bool check[1001];
vector<int> a[1001];

void dfs(int node)
{
    check[node] = true;
    printf("%d ", node);
    for (int i = 0; i < a[node].size(); i++)
    {
        int y = a[node][i];
        if (check[y] == false)
            dfs(y);
    }
}

void bfs(int start)
{
    queue<int> q;
    memset(check, false, sizeof(check));
    check[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        printf("%d ", x);
        for (int i = 0; i < a[x].size(); i++)
        {
            int y = a[x][i];
            if (check[y] == false)
            {
                check[y] = true;
                q.push(y);
            }
        }
    }
}

int main(void)
{
    int n, m, start;
    int u, v;
    scanf("%d %d %d", &n, &m, &start);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        sort(a[i].begin(), a[i].end());

    dfs(start);
    printf("\n");
    bfs(start);
    return 0;
}