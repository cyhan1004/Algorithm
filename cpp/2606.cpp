#include <iostream>
#include <vector>
using namespace std;
bool check[101];
vector<int> a[10001];

void dfs(int node)
{
    check[node] = true;
    for (int i = 0; i<a[node].size(); i++)
    {
        int nextNode = a[node][i];
        if(check[nextNode] == false)
            dfs(nextNode);
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
    dfs(1);

    for (int i = 2; i<= n; i++)
    {
        if(check[i] == true)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}