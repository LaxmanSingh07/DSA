// Greedy if you are at the i'th activity what shuld be your next step

// Take the next activity which ends first

// Approach :

// Sort the activities according to their finish time

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> activities(n);
    for (int i = 0; i < n; i++)
    {
        cin >> activities[i].first >> activities[i].second;
    }

    // sort the activities according to their finish time

    // lamda function
    sort(activities.begin(), activities.end(), [&](pair<int, int> &a, pair<int, int> &b)
         { return a.second < b.second; });

    int take=1;
    int end=activities[0].second;

    for(int i=1;i<n;i++)
    {
        if(activities[i].first>=end)
        {   
            take++;
            end=activities[i].second;

        }
    }

    cout<<take<<endl;

    return 0;
}
