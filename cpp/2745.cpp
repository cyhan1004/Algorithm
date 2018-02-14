#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string n;
    int b;
    long long ans = 0;
    cin >> n >> b;
    for (int i = 0; i< n.size(); i++)
    {
        if(n[i] >= '0' && n[i] <= '9')
            ans = ans * b + (n[i] - '0');
        else
            ans = ans * b + (n[i] -'A' + 10);
    }
    cout << ans << endl;

    return 0;
}

