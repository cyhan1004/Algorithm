#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    int N,M;
    cin >> N >> M;
    int idx = 1;
    int temp;
    for (int i = 1; i <= N; i++)
        q.push(i);
    
    cout << "<";
    while(!q.empty())
    {
        if (idx % M != 0)
        {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        else
        {
            cout << q.front();
            if(q.size() != 1)
                cout<<", ";
            q.pop();
        }
        idx++;
    }
    cout << ">" << endl;
    return 0;
}