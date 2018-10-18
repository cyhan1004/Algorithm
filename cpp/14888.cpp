#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ops[4];
int small = 1000000000;
int big = -1000000000;
vector<int> v;
vector<int> num;

void solve()
{
    if(v.size() == num.size() - 1)
    {
        int result = num[0];
        for(int i= 0; i<v.size();i++)
        {
            if(v[i] == 0)
            {
                result += num[i+1];
            }
            else if(v[i] == 1)
                result -= num[i+1];
            else if(v[i] == 2)
                result = result * num[i+1];
            else if(v[i] == 3)
                result = result / num[i+1];
        }
        if(small > result)
            small = result;
        if(big < result)
            big = result;
    }

    for(int i = 0; i<4; i++)
    {
        if(ops[i] != 0)
        {
            v.push_back(i);
            ops[i] -= 1;
            solve();
            v.pop_back();
            ops[i] += 1;
        }
    }

}

int main(void)
{

    int cnt;
    scanf("%d",&cnt);
    while(cnt--)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    for(int i = 0; i<4; i++)
        cin >> ops[i];

    solve();
    cout << big << endl << small << endl;


    return 0;
}