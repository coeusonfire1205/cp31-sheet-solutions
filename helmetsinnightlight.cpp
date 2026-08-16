#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int main() {
    fastio();
    cin >> t;
    while(t--) 
    {
        int n,p;
        cin>>n;
        cin>>p;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++)
        {
            vec[i]={b[i],a[i]};
        }
        sort(vec.begin,vec.end);
        
    }
    return 0;
}