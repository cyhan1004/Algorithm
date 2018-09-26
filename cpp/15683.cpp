#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int x[] = {0,1,0,-1};
int y[] = {1,0,-1,0};
int origin[9][9];
int temp[9][9];
bool Map[9][9][4]; //방향정보저장
int N, M;
int answer = 987654321;
vector<int> Rotate; // 회전정보 저장
vector<pair<int, int>> camera; //좌표


int recovery()
{
    int cnt = 0;
    for(int i = 0; i< N; i++)
    {
        for(int j = 0; j< M; j++)
        {
            if (temp[i][j] == 0)
            {
                cnt++;
            }
            temp[i][j] = origin[i][j];
        }
    }
    return cnt;
}

void get_map(int n, int rotate)
{
    int a = camera[n].first;
    int b = camera[n].second;
    int dx, dy;
    for(int i = 0; i<4; i++)
    {
        if(Map[a][b][i])
        {
            dx = a + x[(i + rotate) % 4];
            dy = b + y[(i + rotate) % 4];
            while(temp[dx][dy] != 6 && dx >= 0 && dx < N && dy >= 0 && dy < M)
            {
                if (temp[dx][dy] == 0)
                    temp[dx][dy] = 9;
                dx += x[(i + rotate) % 4];
                dy += y[(i + rotate) % 4];
            }
        }
    }
    return;

}

void dfs(int cnt)
{

    if (camera.size() == cnt)
    {
        for(int i = 0; i < Rotate.size(); i++)
        {
            get_map(i,Rotate[i]);
        }

        answer = min(answer, recovery());
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        Rotate.push_back(i);
        dfs(cnt+1);
        Rotate.pop_back();
    }
    return;

}

int main(void)
{
    scanf("%d %d",&N, &M);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> temp[i][j];
            origin[i][j] = temp[i][j];
            if(origin[i][j] == 0 || origin[i][j] == 6)
                continue;
            camera.push_back(make_pair(i,j));

            switch(origin[i][j])
            {
                case 1:
                    Map[i][j][1] = true;
                    break;
                case 2:
                    Map[i][j][1] = true;
                    Map[i][j][3] = true;
                    break;
                case 3:
                    Map[i][j][0] = true;
                    Map[i][j][1] = true;
                    break;
                case 4:
                    Map[i][j][0] = true;
                    Map[i][j][1] = true;
                    Map[i][j][3] = true;
                    break;
                case 5:
                    for(int k = 0; k<4; k++)
                    {
                        Map[i][j][k] = true;
                    }
                    break;

            }

        }

    }
    dfs(0);
    printf("%d\n", answer);
    return 0;
}

