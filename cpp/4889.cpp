#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int ans = 987654321;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> permutation(n);

    for(int i = 0; i<n/2; i++)
        permutation[i] = 1;

    sort(permutation.begin(), permutation.end());

    do{
        vector<int> start, link;
        for(int i = 0; i<n; i++)
        {
            if(permutation[i] == 1)
            {
                start.push_back(i);
            }
            else
                link.push_back(i);
        }
        int start_score = 0;
        int link_score = 0;

        for(int i = 0; i<n/2; i++)
        {
            for(int j = 0; j<n/2; j++)
            {
                if(i == j)
                    continue;
                start_score += a[start[i]][start[j]];
                link_score += a[link[i]][link[j]];
            }
        }
        int diff = abs(start_score - link_score);
        if(diff < ans)
            ans = diff;

    }while(next_permutation(permutation.begin(), permutation.end()));


    cout << ans << endl;
    return 0;
}