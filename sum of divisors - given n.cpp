#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// Try out your code here
	int n;cin>>n;
  	int sum=0;
  int fact=1;
  while(n>0){
  	for(int i=1;i<n;i++)
    {
      if(n%i==0)
        fact=i;
    }
    n=n-fact;
    sum +=1;
}
  	cout<<sum<<endl;
  return 0;
}