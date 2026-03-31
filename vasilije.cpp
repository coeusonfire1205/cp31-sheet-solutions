#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>> n >> k >> x;
        ll sum=n*(n+1)/2;
        ll sum2=k*(k+1)/2;
        ll second=n-k;
        ll sum3=sum-(second*(second+1)/2);
        if(x>=sum2 && x<=sum3)
        {
            cout<<"Yes\n";
        }
        else
        cout<<"No\n";
    }
}