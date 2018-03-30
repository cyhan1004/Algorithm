#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int ans = 0;
    cin >> n;
    int three = 0;
    int five = n/5;
    n = n%5;

    while(five >= 0)
    {
        if(n%3 == 0)
        {
            three += (n/3);
            n %= 3;
            break;
        }
        five -= 1;
        n += 5;
    }
    if(n != 0)
        cout << -1 << '\n';
    else
    {
        ans = three + five;
        cout << ans << '\n';
    }

    return 0;
}