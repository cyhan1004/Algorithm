#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    string binary;
    cin >> binary;
    int size = binary.size();

    if(size % 3 == 1)
        cout << binary[0];

    else if(size % 3 == 2)
        cout << (binary[0]-'0') * 2 + (binary[1]-'0');

    for (int i = size%3 ; i < size; i+= 3)
    {
        cout << (binary[i] - '0') * 4 + (binary[i+1] -'0') * 2 + (binary[i+2]-'0');
    }
    cout<<"\n";
    return 0;
}