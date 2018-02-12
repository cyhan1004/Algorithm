#include <iostream>
using namespace std;

int dp[101][10];

long long go(int n)
{
    long long ans = 0;
    for (int i = 1; i<=9; i++) 
        dp[1][i] = 1;
    for (int N = 2; N <= n; N++) //N : 자리수
    {
        for (int L = 0; L <= 9; L++) // L : 끝자리 숫자
        {
            if(L-1 >= 0)
                dp[N][L] += dp[N-1][L-1];
            if(L+1 <= 9)
                dp[N][L] += dp[N-1][L+1];
            dp[N][L] %= 1000000000;
        }
    }
    for (int i = 0; i<=9; i++)
    {
        ans += dp[n][i];
    }
    return ans % 1000000000;
}
int main(void)
{
    int input;
    cin >> input;
    cout << go(input) << endl;
    return 0;
}

