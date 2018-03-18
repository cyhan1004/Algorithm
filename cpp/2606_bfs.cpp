#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool check[101];
vector<int> a[10001];
queue<int> q;
void bfs(int start)
{
    check[start] = true;
    q.push(start);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i< a[x].size(); i++)
        {
            int nextNode = a[x][i];
            if(check[nextNode] == false)
            {
                check[nextNode] = true;
                q.push(nextNode);
            }

        }
    }
}
int main(void)
{
    int n, m, v, u;
    int ans = 0;
    cin >> n >> m;
    for (int i = 0; i< m; i++)
    {
        cin >> v >> u;
        a[v].push_back(u);
        a[u].push_back(v);
    }
    bfs(1);

    for (int i = 2; i<= n; i++)
    {
        if(check[i] == true)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}