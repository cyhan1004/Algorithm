#include <iostream>

using namespace std;
int d[100];

int go(int n)
{
    d[1] = 1, d[2] = 2, d[3] = 4;
    if(n <= 3)
        return d[n];
    for (int i = 4; i<=n; i++)
        d[i] = d[i-1] + d[i-2] + d[i-3];
    return d[n];
}
int main(void)
{   
    int cnt, input;
    cin >> cnt;
    while(cnt--)
    {
        cin >> input;
        cout<<go(input)<<endl;
    }
    
    return 0;
}