#include <iostream>
#include <queue>
#include <stack>
#define MAX 100000

using namespace std;
bool check[MAX+1];
int from[MAX+1];
int dist[MAX+1];

queue<int> q;


void solve(int start, int end)
{
    dist[start] = 0;
    check[start] = true;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        if(now - 1 >= 0)
        {
            if(check[now-1] == false)
            {
                check[now-1] = true;
                dist[now-1] = dist[now]+1;
                from[now-1] = now;
                q.push(now-1);

            }
        }
        if(now+1 <= MAX)
        {
            if(check[now+1] == false)
            {
                check[now+1] = true;
                dist[now+1] = dist[now] + 1;
                from[now+1] = now;
                q.push(now+1);
            }
        }

        if(2*now <= MAX)
        {
            if(check[now*2] == false)
            {
                check[2*now] = true;
                dist[now*2] = dist[now] + 1;
                from[now*2] = now;
                q.push(2*now);
            }
        }

    }

}

int main(void)
{
    int start, end;
    cin >> start >> end;
    q.push(start);
    solve(start, end);

    cout << dist[end]<<endl;
    stack<int> s;


    for(int i = end; i != start; i = from[i])
    {
        s.push(i);
    }
    s.push(start);

    while(!s.empty())
    {
        cout << s.top()<<" ";
        s.pop();
    }
    cout << endl;


    return 0;
}