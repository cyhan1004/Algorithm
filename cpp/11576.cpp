#include <iostream>
using namespace std;

int main(void)
{
    int A, B, m;
    int a[25];
    int decimal = 0;
    int ans[25];
    int idx = 0;
    cin >> A >> B;
    cin >> m;
    for (int i = 0; i< m; i++)
        cin >> a[i];
    for (int i = 0; i< m; i++)
    {
        decimal = decimal * A + a[i];
    }

    while(decimal >= B)
    {
        ans[idx] = decimal % B;
        decimal /= B;
        idx++;
    }

    ans[idx] = decimal;
    for (int i = idx; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout<<"\n";


    return 0;
}
