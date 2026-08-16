#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'

int solve(int k, vector<int>arr) 
{
    int mini=k;
    int cnt=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%k==0)
            return 0;

        if(arr[i]%2==0)
            cnt++;

        if(arr[i]%k!=0)
        {
            mini=min(mini,k-(arr[i]%k));
        }
    }

    if(k==4)
    {
        if(cnt>=2)
            return 0;

        if(cnt==1)
            return min(mini,1);

        return min(mini,2);
    }

    return mini;
}

int main() {
    fastio();
    int t;
    cin >> t;

    while(t--)
    {
        int k,n;
        cin>>n;
        cin>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        cout << solve(k,arr) << endl;
    }

    return 0;
}