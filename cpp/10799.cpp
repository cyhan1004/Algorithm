#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int main(void)
{
    string input;
    int ans = 0;
    stack<int> stk;

    cin >> input;
    for (int i = 0; i<input.length(); i++)
    {
        if(input[i] == '(')
            stk.push(i);
        else
        {
            if (i - stk.top() == 1)
            {
                stk.pop();
                ans += stk.size();
            }
            else
            {
                stk.pop();
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}