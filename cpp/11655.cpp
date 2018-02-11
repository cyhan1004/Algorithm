#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(void)
{
    string input;
    //char* buf = new char[100];
    getline(cin, input);
    int len = 0;
    while(input[len++] != '\0');
  
    for (int i = 0; i< len; i++)
    {
        
        if(input[i] >= 'a' && input[i] <= 'm')
            input[i] += 13;
        else if(input[i] > 'm' && input[i] <= 'z')
            input[i] -= 13;
        else if(input[i] >= 'A' && input[i] <= 'M')
            input[i] += 13;
        else if(input[i] > 'M' && input[i] <= 'Z')
            input[i] -= 13;
            
    }

    
    cout<<input<<endl;
    
    return 0;
}