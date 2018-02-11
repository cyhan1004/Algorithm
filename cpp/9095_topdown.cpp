#include <iostream>

using namespace std;
int d[100];

int go(int n)
{
    d[1] = 1, d[2] = 2, d[3] = 4;
    if(n <= 3)
        return d[n];
    else
    {
        if(d[n]>0)
            return(d[n]);
        else
            d[n] = go(n-1) + go(n-2) + go(n-3);
    }
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