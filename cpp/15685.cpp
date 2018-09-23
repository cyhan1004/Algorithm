#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int arr[102][102];

int get_answer()
{
    int answer = 0;
    for(int i = 0; i<101; i++)
    {
        for (int j = 0; j<101; j++)
        {
            if (arr[i][j] == 1 && arr[i][j+1] == 1 && arr[i+1][j] == 1 && arr[i+1][j+1] == 1)
                answer += 1;

        }
    }
    return answer;
}


void calculate_generator(int start_x, int start_y, int d, int g)
{
    vector<vector<int>> generator;
    int prev_len, cur_len;
    for(int i = 0; i<= g; i++)
    {
        vector<int> cur_gen(pow(2,i));
        generator.push_back(cur_gen);
    }
    generator[0][0] = d;
    for(int i = 1; i<= g; i++)
    {
        prev_len = generator[i-1].size();
        cur_len = generator[i].size();
        for(int j = 0; j< prev_len; j++)
        {
            generator[i][j] = generator[i-1][j];
        }
        int idx = prev_len - 1;
        for(int j = prev_len; j<cur_len; j++)
        {
            int next_dir = generator[i][idx] + 1;
            idx--;
            if(next_dir >= 4)
                next_dir = 0;
            generator[i][j] = next_dir;
        }

    }

    //update arr
    int x = start_x, y = start_y;
    arr[x][y] = 1;
    for (int i = 0; i< generator[g].size(); i++)
    {
        if (generator[g][i] == 0)
        {
            arr[++x][y] = 1;
        }

        if (generator[g][i] == 1)
        {
            arr[x][--y] = 1;
        }
        if (generator[g][i] == 2)
        {
            arr[--x][y] = 1;
        }

        if (generator[g][i] == 3)
        {
            arr[x][++y] = 1;
        }

    }

}

int main(void)
{
    int cnt, x, y, d, g;
    int ans;
    cin >> cnt;
    for(int i = 0; i< cnt; i++)
    {
        cin >> x >> y >> d >> g;
        calculate_generator(x, y, d,g);
    }
    ans = get_answer();
    cout << ans << endl;

    return 0;
}