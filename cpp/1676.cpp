#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int ans = 0;
    cin >> n;

    ans = (n / 5) + (n / 25) + (n / 125);
    cout << ans << '\n';

    return 0;
}