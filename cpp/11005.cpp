#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    int N,B,r;
    string ans = "";
    cin >> N >> B;

    while(N > 0)
    {
        r = N % B;
        if(r>=0 && r <= 9)
            ans += (char)(r + '0');
        else   
            ans += (char)(r - 10 + 'A');

        N = N / B;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}