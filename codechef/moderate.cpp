#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, long long> mp;

        for(int i = 0; i < n; i++) {
            int key = a[i] - i;
            mp[key]++;
        }

        long long ans = 0;

        for(auto &it : mp) {
            long long k = it.second;
            ans += k * (k - 1) / 2;
        }

        cout << ans << '\n';
    }
}