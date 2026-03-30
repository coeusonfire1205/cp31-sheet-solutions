#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int c=0;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
        cin >> a[i];
        if(a[i]==k)
        {
            c++;
        }
        }
        if(c>0)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
}