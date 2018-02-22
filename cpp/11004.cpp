#include <iostream>
#include <algorithm>
using namespace std;

int a[5000000];
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    k--;
    nth_element(a, a+k, a+n);

    printf("%d\n",a[k]);

    return 0;
}