#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a<b)
        return gcd(b,a);
    if (b == 0)
        return a;
    else   
        return gcd(b, a%b);
}


int main(void)
{
    int numTestCases;
    int a[101];
    cin >> numTestCases;
    while(numTestCases--)
    {
        int cnt;
        long long ans = 0;
        cin >> cnt;
        for (int i = 0; i< cnt; i++)
            cin >> a[i];
        for (int i = 0; i < cnt-1; i++)
        {
            for (int j = i+1; j < cnt; j++)
            {
                ans = ans + gcd(a[i],a[j]); 
            }
        }
        cout << ans << "\n";
    }

    return 0;
}