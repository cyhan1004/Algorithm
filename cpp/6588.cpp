#include <iostream>
using namespace std;
int p[1000000];// 소수저장
int pn;
int c[1000001];
bool ans;



int main(void)
{
    int n;

    for (int i = 2; i <= 1000000; i++)
    {
        if(c[i] == false)
            p[pn++] = i;
        for (int j = i+i; j <= 1000000; j+=i)
        {
            c[j] = true;
        }
    }

    while(true)
    {
        ans = false;
        scanf("%d", &n);
        if(n == 0)
            break;
        for (int i = 1; i< pn; i++)
        {
            if(c[n-p[i]] == false)
            {
                printf("%d = %d + %d\n", n,p[i], n-p[i]);

                ans = true;
                break;
            }
        }
        if(ans == false)
            printf("%s\n","Goldbach's conjecture is wrong.");

    }

    return 0;
}