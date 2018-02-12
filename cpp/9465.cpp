#include <iostream>
#include <algorithm>
using namespace std;

long long A[100001][2]; //[열][행]
long long dp[100001][3];

int main(void)
{
    int cnt, n;
    long long ans;
    cin >> cnt;
    while(cnt--)
    {
        ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> A[i][0];
            
        
        for (int i = 1; i<= n; i++)
            cin >> A[i][1];


        dp[0][0] = 0, dp[0][1] = 0, dp[0][2] = 0;
        for (int i = 1; i <= n; i++)
        {

            dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
            dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + A[i][0];
            dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + A[i][1];
         
        }
        for (int i = 1; i<=n; i++)
            ans = max({ans, dp[i][0], dp[i][1], dp[i][2]});
        cout<<ans<<endl;
        
    }
    return 0;
}