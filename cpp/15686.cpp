//
// Created by Chae Yeon Han on 2018. 9. 21..
//

#include <iostream>
#include <vector>
#include <algorithm>
#define INF 987654321

using namespace std;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

int get_distance(int i, int j)
{
    int dist = abs(house[i].first - chicken[j].first) + abs(house[i].second - chicken[j].second);
    return dist;
}


int main(void)
{
    int N, M, input;
    cin >> N >> M;

    int ans = INF;

    for (int i = 0; i< N; i++)
    {
        for (int j = 0; j< N; j++)
        {
            cin >> input;
            if(input == 1)
                house.push_back({i,j});
            if(input == 2)
                chicken.push_back({i,j});
        }
    }

    int len_chicken = chicken.size();
    int len_house = house.size();
    int answer = INF;
    int min_distance, total_dist;
    vector<int> work(len_chicken, 1);
    for(int i = 0; i< M; i++)
        work[i] = 0;
    int idx = 0;

    do {
        total_dist = 0;
        for(int i = 0; i< len_house; i++)
        {
            min_distance = INF;
            for(int j = 0; j< len_chicken; j++)
            {
                if(!work[j])
                {
                    min_distance = min(min_distance, get_distance(i,j));

                }

            }
            total_dist += min_distance;
        }
        if(answer > total_dist)
            answer = total_dist;


    }while(next_permutation(work.begin(),work.end()));
    cout << answer << endl;

    return 0;
}
