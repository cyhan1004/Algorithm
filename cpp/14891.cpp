#include <iostream>
#include <vector>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int arr[4][8];
int temp[4][8];
bool is_left_finished = false;
bool is_right_finished = false;
vector<pair<int, int>> v;
int answer = 0;


int get_answer()
{
    for(int i = 0; i< 4; i++)
    {
        if (arr[i][0] == 1)
            answer += pow(2,i);
    }
    return answer;
}

void Rotate()
{
    for(int i = 0; i<v.size(); i++)
    {
        int a = v[i].first;
        int dir = v[i].second;
        if(dir == 1) //시계방향
        {
            temp[a][0] = arr[a][7];
            for(int j = 1; j<8; j++)
            {
                temp[a][j] = arr[a][j-1];
            }
        }
        else if(dir == -1) //반시계방향
        {
            temp[a][7] = arr[a][0];
            for(int j = 1; j<8; j++)
            {
                temp[a][j-1] = arr[a][j];
            }
        }
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<8; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
    v.clear();
}

void dfs_right(int rot, int dir)
{

    if(is_right_finished)
    {
        return;
    }
    if (rot == 3)
        is_right_finished = true;

    int i = rot;
    while(i < 3) //현재기준 오른쪽꺼 싹검사
    {
        if (arr[i][2] == arr[i+1][6])
        {
            is_right_finished = true;
            return;
        }

        v.push_back(make_pair(i+1,-dir));
        dfs_right(i+1, -dir);
        break;
    }

}

void dfs_left(int rot, int dir)
{
    if(is_left_finished)
    {
        return;
    }

    if(rot == 0)
        is_left_finished = true;

    int i = rot;
    while(i> 0) //현재기준 왼쪽꺼 싹검사
    {
        if(arr[i][6] == arr[i-1][2])
        {
            is_left_finished = true;
            return;
        }

        v.push_back(make_pair(i-1, -dir));
        dfs_left(i-1, -dir);
        break;
    }
}

int main(void)
{
    int rotate, dir, k;
    string str;
    for(int i = 0; i<4; i++)
    {


        cin >> str;
        for(int j = 0; j<8; j++)
        {
            arr[i][j] = str[j] - '0';
        }

    }
    cin >> k;

    for(int i = 0; i<k; i++)
    {
        for(int m = 0; m<4; m++)
        {
            for(int n = 0; n<8; n++)
            {
                temp[m][n] = arr[m][n];
            }
        }
        cin >> rotate >> dir;

        dfs_left(rotate-1, dir);
        dfs_right(rotate-1, dir);
        v.push_back(make_pair(rotate-1, dir));

        Rotate();
        is_left_finished = false;
        is_right_finished = false;
    }


    cout << get_answer() << endl;

    return 0;
}
