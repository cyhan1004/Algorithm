#include <iostream>
using namespace std;
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int arr[1001];
int dp[1001];


int go(int n)
{
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            dp[i] = MAX(dp[i], arr[j]+dp[i-j]);
        }
    }
    return dp[n];
}

int main(void)
{
    int cnt;
    cin >> cnt;
    for (int i = 1; i<= cnt; i++)
        cin >> arr[i];
    cout << go(cnt) << endl;
    return 0;
}