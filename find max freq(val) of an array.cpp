#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int maxi=0,val;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
        if(maxi<mp[v[i]])
        {
            maxi = mp[v[i]];
            val = v[i];
        }
    }
    cout<<val;
    return 0;
}   
