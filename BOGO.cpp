#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'

int main() {
    fastio();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end(), greater<int>());

        for (auto x : a) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}