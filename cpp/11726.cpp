#include <iostream>

using namespace std;

int d[1001];

int go(int n)
{
    d[0] = 1, d[1] = 1;
    for (int i = 2; i<= n; i++)
    {
        d[i] = d[i-1] + d[i-2];
        d[i] %= 10007;
    }
    return d[n];
} 

int main(void)
{
    int input;
    cin >> input;
    cout << go(input)<< endl;
    return 0;
}