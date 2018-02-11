#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    stack<char> left_stack;
    stack<char> right_stack;
    string input, command;
    char insert_char;
    int cnt, size;
    cin >> input;

    for (int i = 0; i< input.length(); i++)
        left_stack.push(input[i]);


    cin >> cnt;
    while(cnt--)
    {
        cin>>command;
        if(command == "P")
        {
            cin >> insert_char;
            left_stack.push(insert_char);
        }
        else if(command == "L")
        {
            if (left_stack.size() == 0)
                continue;
            right_stack.push(left_stack.top());
            left_stack.pop();
        }
        else if(command == "D")
        {
            if (right_stack.size() == 0)
                continue;
            left_stack.push(right_stack.top());
            right_stack.pop();
        }
        else if(command == "B")
        {   if(left_stack.size() == 0)
                continue;
            left_stack.pop();
        }
    }

    size = left_stack.size();
    for (int i = 0; i< size; i++)
    {
        right_stack.push(left_stack.top());
        left_stack.pop();
    }

    size = right_stack.size();
    for (int i = 0; i< size; i++)
    {
        cout << right_stack.top();
        right_stack.pop();
    }
    cout<<endl;

    
    return 0;
}