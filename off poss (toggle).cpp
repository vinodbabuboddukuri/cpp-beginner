#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
    int n;cin>>n;
  	vector<int>v(n);
  	for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
  	int cnt=0;
  	for(int i=0;i<n;i++)
    {
      if(v[i]==0)
      {
        cnt++;
        v[i]=1;
      for(int j=i+1;j<n;j++)
      {
        v[j]= 1-v[j];
      }
    }
    }
  	cout<<cnt<<endl;
    return 0;
}