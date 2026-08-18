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
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cnt = 1;

        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1])
                cnt++;
            else
                cnt = 1;

            mp1[a[i]] = max(mp1[a[i]], cnt);
        }

        mp1[a[0]] = max(mp1[a[0]], 1);

        cnt = 1;

        // Longest consecutive segment in b
        for(int i = 1; i < n; i++)
        {
            if(b[i] == b[i-1])
                cnt++;
            else
                cnt = 1;

            mp2[b[i]] = max(mp2[b[i]], cnt);
        }

        mp2[b[0]] = max(mp2[b[0]], 1);

        int ans = 0;

        for(auto i : mp1)
        {
            ans = max(ans, i.second + mp2[i.first]);
        }

        for(auto i : mp2)
        {
            ans = max(ans, i.second + mp1[i.first]);
        }

        cout << ans << endl;
    }

    return 0;
}