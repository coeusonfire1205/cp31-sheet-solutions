#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int solve(string s) {
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==0)c++;
    }
    return abs(s.length()-min(c,(s.length()-c)));
}

int main() {
    fastio();
    int t;
    cin >> t;
    while(t--) 
    {
        string s;
        cin>>s;
        if(s.length()==1)
        {
            cout<<1;
        }
        else if(s.length()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int c=solve(s);
            cout<<c<<endl;

        }
    }
    return 0;
}