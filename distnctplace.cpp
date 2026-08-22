#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'

int main() {
    fastio();

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<char,int> mp;

        // Initially everything is on the right
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        unordered_map<char,int> left;

        int ans = 0;

        for(int i = 0; i < n - 1; i++) {

            // Move s[i] from right to left
            left[s[i]]++;
            mp[s[i]]--;

            // If frequency becomes 0, delete it
            if(mp[s[i]] == 0) {
                mp.erase(s[i]);
            }

            // Number of distinct characters on both sides
            int curr = left.size() + mp.size();

            ans = max(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}