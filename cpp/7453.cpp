#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getSum(vector<int>&x,vector<int>&y,vector<int>&xy,int n)
{
    int idx = 0;
    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j<n; j++)
            xy[idx++] = x[i] + y[j];
    }
}

long long getAns(vector<int>&ab, vector<int>&cd, int n)
{
    long long ans = 0;
    for(int i = 0; i<n; i++)
    {

        auto equalPair = equal_range(cd.begin(), cd.end(), -ab[i]);
        ans += distance(equalPair.first, equalPair.second);


    }
    return ans;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);
    vector<int> ab(n*n);
    vector<int> cd(n*n);
    for (int i = 0; i< n; i++)
        cin >>a[i]>>b[i]>>c[i]>>d[i];
    getSum(a,b,ab,n);
    getSum(c,d,cd,n);
    sort(cd.begin(),cd.end());
    cout<<getAns(ab,cd,n*n)<<endl;
    return 0;
}
