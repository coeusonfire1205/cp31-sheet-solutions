#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
        }
        else{
        ll c=1;
        for(ll i=2;n%i==0;i++)
        {
            c++;
        }
        cout<<c<<endl;
        }
    }
}