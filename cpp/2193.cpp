#include <iostream>
using namespace std;

long long dp[91][2];

long long go(int pn)
{
    long long ans = 0;

    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i<=pn;i++)
    {
        for (int j = 0; j<= 1; j++)
        {
            if (j == 0)
                dp[i][j] = dp[i-1][0] + dp[i-1][1];
            else
                dp[i][j] = dp[i-1][0];
        }
    }
    ans = dp[pn][0] + dp[pn][1];
    return ans;
}

int main(void)
{
    int input;
    cin >> input;
    cout<<go(input)<<endl;
    return 0;
}