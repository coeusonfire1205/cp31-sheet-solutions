#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n/7==0)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<n-(n%7)<<endl;
    }
}
