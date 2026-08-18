#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int main() {
    fastio();
    int t = 1;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        
            long long a=1;
            long long b=n-1;
            for(long long fac=2;fac*fac<=n;fac++)
            {
                if(n%fac==0)
                {
                a=n/fac;
                b=n-a;
                break;
                }
            }
            cout<<a<<" "<<b<<endl;
    }
    return 0;
}