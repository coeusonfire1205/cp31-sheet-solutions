#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(mp.size()>2)
        {
            cout<<"No"<<endl;
        }
        else if(mp.size()==2)
        {
            for(auto it:mp)v.push_back(it.second);
       abs(v[0]-v[1]) >= 2 ? cout<<"NO"<<endl : cout<<"YES"<<endl;
        }

    }
}
