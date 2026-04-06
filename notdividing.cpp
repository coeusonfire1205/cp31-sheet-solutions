#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]==0||vec[i]==1)
            {
                vec[i]++;
                while(vec[i]%vec[i-1]==0)
                {
                    vec[i]++;
                }
            }
            if(vec[i]%vec[i-1]==0)
            {
                vec[i]++;
            }
        }
        for(int i:vec)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}