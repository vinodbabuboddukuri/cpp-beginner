#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    int num,diff;cin>>num>>diff;
    int cnt=0;
    while(cin>>n)
     if(abs(n-num)<=diff)
         cnt++;
    cout<<cnt;
    
    return 0;
}   
