#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int ans[26];
    int len;

    string input;
    cin >> input;
    len = input.length();
    for (int i = 0; i< sizeof(ans)/4; i++)
        ans[i] = -1;

    for (int i = 0; i< len; i++)
    {
        if(ans[input[i]-97] != -1)
            continue;
        ans[input[i]-97] = i;
    }
        

    for (int i = 0; i< sizeof(ans)/4; i++)
        cout<<ans[i] << " ";
    cout<<endl;


    return 0;
}