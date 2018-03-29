#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<int> stk;

int ans = 0;

int solution(string s)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        int score = 0;
        if(s[i] == '(')
            stk.push(-1);
        else if(s[i] == '[')
            stk.push(-2);
        else
        {
            int tmp = stk.top();
            if(s[i] == ')')
            {
                if(tmp == -1)
                {
                    stk.pop();
                    stk.push(2);
                    continue;
                    
                }

                while(!stk.empty())
                {
                    if(stk.top() == -1)
                    {
                        stk.pop();
                        stk.push(score*2);
                        break;
                    }
                    else if(stk.top() == -2)
                        return 0;
                    else
                    {
                        score += stk.top();
                        stk.pop();
                    }
                }
                
            }
            else if(s[i] == ']')
            {
                if(tmp == -2)
                {
                    stk.pop();
                    stk.push(3);
                    continue;
                }
                while(!stk.empty())
                {
                    if(stk.top() == -2)
                    {
                        stk.pop();
                        stk.push(score*3);
                        break;
                    }
                    else if(stk.top() == -1)
                        return 0;
                    else{
                        score += stk.top();
                        stk.pop();
                    }
                }
            }
        }
    }
    int length = stk.size();
    for (int i = 0; i<length; i++)
    {
        if(stk.top() < 0)
            return 0;
        ans += stk.top();
        stk.pop();
    }
	return ans;
}

int main(void)
{
	string s;
	cin >> s;  
	cout << solution(s) << endl;
	return 0;
}