#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i<n; i++)
        cout << a[i] << '\n';
    return 0;
}