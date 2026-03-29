#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string cur = x;
        int ops = 0;

        // If already present
        if (cur.find(s) != string::npos) {
            cout << 0 << '\n';
            continue;
        }

        // Grow until size >= m
        while (cur.size() < s.size()) {
            cur += cur;
            ops++;
        }

        // Try few more times
        for (int i = 0; i < 5; i++) {
            if (cur.find(s) != string::npos) {
                cout << ops << '\n';
                goto done;
            }
            cur += cur;
            ops++;
        }

        cout << -1 << '\n';

        done:;
    }

    return 0;
}