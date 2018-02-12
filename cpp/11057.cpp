#include <iostream>
using namespace std;

int dp[1001][10];

long long go(int n)
{
    long long ans = 0;
    for (int i = 0; i<=9; i++) 
        dp[1][i] = 1;
    for (int N = 2; N <= n; N++) //N : 자리수
    {
        for (int L = 0; L <= 9; L++) // L : 끝자리 숫자
        {
            for (int i = 0; i<= L; i++)
            {
                dp[N][L] += dp[N-1][i];
                dp[N][L] %= 10007;
            }
        }
    }
    for (int i = 0; i<=9; i++)
    {
        ans += dp[n][i];
    }
    return ans % 10007;
}
int main(void)
{
    int input;
    cin >> input;
    cout << go(input) << endl;
    return 0;
}

