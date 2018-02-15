#include <iostream>
using namespace std;
int arr[1000001]; // 소수저장
int ans = 0;
bool c[1000001]; // true면 지워짐

int main(void)
{
    int m, n;
    cin >> m >> n;
    if(m > n)
        swap(m,n);

    for (int i = 2; i<= n; i++)
    {
        if(c[i] == false)
            arr[ans++] = i;

        for (int j = i*2; j <= n; j += i)
        {
            c[j] = true;
        }
    }

    for (int i = 0; i< ans; i++)
    {
        if(m <= arr[i])
            cout << arr[i] << "\n";
    }

    return 0;
}