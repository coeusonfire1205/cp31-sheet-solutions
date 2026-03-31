#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {int ans=0;
        vector<vector<string>> v;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                char c;
                cin>>c;
                if(c=='.')
                continue;
                else
                {
                int x=(i>5?11-i:i);
                int y=(j>5?11-j:j);
                ans+=min(x,y);
                }
            }
        }
        cout<<ans<<endl;

    }
}