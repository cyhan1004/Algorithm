/*
 * 이분매칭(Bipartite Matching)
 * : 이분 그래프(bipartite graph)에서의 최대 유량을 구하는 경우
 */
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool check[1001];
vector<int> v[1001];
int match[1001];

int dfs(int from)
{
    if(check[from] == true)
        return 0;
    check[from] = true;
    for (int i = 0; i<v[from].size(); i++)
    {
        int to = v[from][i];
        if(!match[to] || dfs(match[to])) //매칭이 안되어있거나, 이미 매칭된 from 노드중 다른 to 노드로 매칭될 수 있을 때
        {
            match[to] = from;
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int n, m, cnt, num;
    int ans = 0;
    cin >> n >> m;
    for (int i = 1; i<= n; i++)
    {
        cin >> cnt;
        while(cnt--)
        {
            cin >> num;
            v[i].push_back(num);
        }
    }

    for (int i = 1; i<=n; i++)
    {
        memset(check,false,sizeof(check));
        if(dfs(i))
            ans++;
    }
    cout<<ans<<'\n';
    return 0;
}