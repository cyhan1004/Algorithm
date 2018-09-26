#include <iostream>

using namespace std;
int arr[32][12];
int answer = -1;
int N, M, H;

bool check()
{
    for(int i = 1; i <= N ; i++)
    {
        int cur_x = i;
        for(int j = 1; j<=H; j++)
        {
            if(arr[j][cur_x] == 0)
                continue;
            if(arr[j][cur_x] == 1)
            {
                cur_x++;
                continue;
            }
            if(arr[j][cur_x] == 2)
            {
                cur_x--;
                continue;
            }

        }
        if(cur_x != i)
            return false;
    }
    return true;
}

void solve(int target_count, int current_count)
{
    if(target_count == current_count)
    {
        if(check())
        {
            answer = target_count;
        }
        return;
    }
    for(int i = 1; i<=H; i++)
    {
        for(int j = 1; j<N; j++)
        {
            if(arr[i][j] == 0 && arr[i][j+1] == 0)
            {
                arr[i][j] = 1;
                arr[i][j+1] = 2;
                solve(target_count, current_count + 1);
                arr[i][j] = 0;
                arr[i][j+1] = 0;
            }

        }
    }

}
int main(void)
{
    int a, b;
    scanf("%d %d %d", &N, &M, &H);
    //cin >> N >> M >> H;
    for(int i = 0; i<M; i++)
    {
        scanf("%d %d", &a, &b);
        //cin >> a >> b;
        arr[a][b] = 1;
        arr[a][b+1] = 2;
    }

    for(int i = 0; i<=3; i++)
    {
        solve(i,0);
        if(answer != -1)
            break;
    }

    printf("%d\n",answer);
    //cout << answer << endl;
    return 0;
}