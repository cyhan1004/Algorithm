#include <iostream>
using namespace std;

int cost[11][11];
bool check[11];
int n;
int Min = 987654321;
int cnt = 0;


void dfs(int start, int node, int sum)
{
    if (start == node && n == cnt)
    {
        if (Min > sum)
            Min = sum;
        return;
   }
   
   for (int i = 0; i < n; i++)
   {
        if (check[i] == false && cost[node][i] != 0)
        {
            check[i] = true;
            sum += cost[node][i];
            cnt+=1;
            dfs(start,i,sum);
            check[i] = false;
            sum -= cost[node][i];
            cnt-=1;
        }
        
   }
}

int main(void)
{
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        dfs(i,i,0);
    }

    cout << Min << '\n';
    return 0;
}
