#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int max_streak = 1, curr = 1;

        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                curr++;
            } else {
                curr = 1;
            }
            max_streak = max(max_streak, curr);
        }

        cout << max_streak + 1 << "\n";
    }
}