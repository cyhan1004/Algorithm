#include <iostream>
#include <cstring>

using namespace std;
int main(void)
{
    string A, B, C, D;
    long ans;
    string x, y;
    cin >> A >> B >> C >> D;
    
    x = A;
    y = C;
    x += B;
    y += D;
    ans = stol(x) + stol(y);
    cout<<ans<<endl;
    return 0;

}