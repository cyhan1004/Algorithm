#include <iostream>
#include <algorithm>
using namespace std;
long long a[1000000];

int main(void)
{
   int n;
   
   cin >> n;
   
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   sort(a, a + n);

   long long ans = a[0];
   int ans_cnt = 0;
   int cnt = 1;
   
   for (int i = 1; i < n; i++)
   {
      if (a[i - 1] == a[i])
      {
         cnt++;
      }
      else
         cnt = 1;

      if (ans_cnt < cnt)
      {
         ans = a[i - 1];
         ans_cnt = cnt;

      }
   }
   cout << ans << endl;
   cin >> cnt;
}