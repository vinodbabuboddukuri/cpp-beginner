//using inbuilt gcd function

#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
    int a,b;cin>>a>>b;
    int z;cin>>z;
    int f=a+b;
    if(z>f ||z%gcd(a,b)!=0)
    {
      cout<<"NO"<<endl;
    }else
    {
      cout<<"YES"<<endl;
    }
    return 0;
}