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
        vector<int>vec(n+1,0);
        int count=0;
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
            if(vec[i]>0&&vec[i-1]==0)
            {
                count++;
            }
        }
        cout<<min(count,2)<<endl;
    }
}