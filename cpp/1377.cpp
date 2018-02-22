#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    int ans = 0;
    scanf("%d",&n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&v[i].first);
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i<n; i++)
    {
        if(ans < (v[i].second - i))
            ans =(v[i].second-i);
    }
    ans += 1;
    printf("%d\n",ans);

    return 0;
}