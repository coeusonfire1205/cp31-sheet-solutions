#include<bits/stdc++.h>
using namespace std;
using ll= long long;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,q;
      cin>>n >> q;

      vector<int>vec(n);
      for(int i=0;i<n;i++)
         cin>>vec[i];

      auto total = accumulate(vec.begin(), vec.end(), 0);

      while(q--)
      {
         int l,r,k;
         cin>> l>>r>>k;

         auto sum = accumulate(vec.begin() + (l - 1), vec.begin() + r, 0);

         if((total - sum + (r - l + 1)*k) % 2 != 0)
            cout<<"Yes\n";
         else
            cout<<"No\n";
      }
   }
}