#include <iostream>
using namespace std;
int a[10001];

int main(void)
{
   int cnt, num;
   cin >> cnt;
   for (int i = 0; i < cnt; i++)
   {
      cin >> num;
      a[num]++;
   }
   for (int i = 1; i <= 10000; i++)
   {
      if (a[i] == 0)
         continue;
      else
      {
         for (int j = 1; j <= a[i]; j++)
         {
            cout << i << '\n';
         }
      }

   }
   return 0;
}