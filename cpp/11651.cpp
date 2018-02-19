#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
   int cnt;
   cin >> cnt;
   vector <pair<int, int>> v(cnt);

   for (int i = 0; i < cnt; i++)
      cin >> v[i].second >> v[i].first;
   sort(v.begin(), v.end());
   for (int i = 0; i < cnt; i++)
      cout << v[i].second << " " << v[i].first << '\n';

   return 0;
}