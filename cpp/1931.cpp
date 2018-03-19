#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ans = 0;
bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

void solve(vector<pair<int, int>> &v)
{
    int max = v[0].second;
    ans+=1;
    for (int i = 1; i< v.size(); i++)
    {
        if (max <= v[i].first)
        {
            max = v[i].second;
            ans++;
        }
    }
}

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), compare);
    solve(v);
    cout << ans << '\n';
    return 0;
}