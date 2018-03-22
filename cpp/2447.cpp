#include <iostream>
using namespace std;

void starPointing(int n, int i, int j)
{
    if(n == 1) //base case : n == 1일 때
    {
        cout<<"*";
        return;
    }
    if(((i/n)%3 == 1 && (j/n)%3 == 1) || (i%3 == 1 && j%3 == 1))
    {
        cout << " ";
    }
    else2
        starPointing(n/3,i,j);

}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
            starPointing(n, i, j);
        cout << '\n';
    }
    return 0;
}