#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n <= 1)
        return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main(void)
{
    int cnt, n;
    int ans = 0;
    cin >> cnt;
    while(cnt--)
    {
        cin >> n;
        if(isPrime(n) == true)
            ans ++;
    }
    cout << ans << endl;
    return 0;
}