#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculate(vector<int> &v)
{
    int answer = -999;
    int len = v.size();
    sort(v.begin(),v.end());
    do {

        int temp_ans = 0;
        for(int i = 0; i< len - 1; i++)
        {
            temp_ans += abs(v[i] - v[i+1]);
        }
        answer = max(answer, temp_ans);

    }while(next_permutation(v.begin(),v.end()));
    return answer;
}

int main(void)
{
    int N, input;
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i< N; i++)
    {
        cin >> input;
        v[i] = input;
    }
    cout << calculate(v)<<endl;
    return 0;
}