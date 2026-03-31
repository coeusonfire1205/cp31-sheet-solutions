#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<char,int> mp;
        string s;
        cin >> s;

        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int c = 0;
        for(auto i : mp)
        {
            if(i.second % 2 == 1)
            {
                c++;
            }
        }

        if(k >= c - 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}