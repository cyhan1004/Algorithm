#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
    long long n;
    string ans = "";
    cin >> n;


    while(n != 1 && n != 0)
    {
        if(n >= 0)
        {
            ans += (n % 2 + '0');
            n /= 2;
            n = -n;
        }
        else
        {
            ans += abs(n)%2 + '0';
            if(n%2 != 0)
            {
                n = abs(n) / 2 + 1;
            }
            else
            {
                n = abs(n) / 2;
            }


        }
    }
    ans += n+'0';

    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    return 0;
}
