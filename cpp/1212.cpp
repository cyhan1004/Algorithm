#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    string octal;
    int temp;
    string temp_str;
    string ans = "";
    int r;
    cin >> octal;
    int size = octal.size();
    bool b = false;

    for (int i = 0 ; i < size; i++)
    {
        temp = (octal[i] - '0');
        temp_str = "";
        for (int j = 0; j < 3; j++)
        {
            r = temp % 2;
            temp_str += (char)(r + '0');
            temp /= 2;
        }
        reverse(temp_str.begin(), temp_str.end());
        ans += temp_str;
    }



    for (int i = 0; i< ans.size(); i++)
    {
        if(ans == "000")
        {
            cout<<ans[0] << endl;
            break;
        }
        if(b == false && ans[i] == '0')
            continue;
        if(ans[i] == '1')
            b = true;
        cout<<ans[i];
    }
    cout<<endl;


    return 0;
}