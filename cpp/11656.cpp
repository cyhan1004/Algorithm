#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main(void)
{
    string input;
    cin >> input;
    int len = input.length();
    string* ans = new string[len];
    for (int i = 0; i< len; i++)
        ans[i] = input.substr(i,len);
    sort(ans, ans + len);
    for (int i = 0; i< len; i++)
        cout<<ans[i]<<endl;
    
    delete[] ans;
    
return 0;
}