#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'

int main() {
    fastio();

    int t;
    cin >> t;

    while(t--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        vector<pair<int,int>> health(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];

            health[i] = {arr[i] % k, i + 1};

            if(health[i].first == 0)
            {
                health[i].first = k;
            }
        }

        sort(health.begin(), health.end(), [](pair<int,int> a, pair<int,int> b)
        {
            if(a.first == b.first)
                return a.second < b.second;

            return a.first > b.first;
        });

        for(int i = 0; i < n; i++)
        {
            cout << health[i].second << " ";
        }

        cout << endl;
    }

    return 0;
}