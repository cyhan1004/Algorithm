#include <iostream>
using namespace std;
int main(void)
{
    int n;
    long long ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << ans << '\n';

    return 0;
}