#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string word,res;
        cin>>word>>res;
        unordered_map<char,int> mp,req;
        for(auto x: res) req[x]++;
        bool flag = true;
        int i=word.size()-1, j=res.size()-1;
        while(j>=0 and i>=0){
            mp[word[i]]++;
            if(word[i]==res[j]){
                if(mp[word[i]]>req[word[i]]){
                    flag = false; 
                    break;
                }
                i--,j--;
            }
            else i--;
        }
        if(j>=0) 
        flag = false;
        for(auto c: res)
        {
            if(mp[c]<req[c]) flag = false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}