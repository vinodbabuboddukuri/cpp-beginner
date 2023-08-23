#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
  	int n;cin>>n;
  	int fact=1,pre;
  	//fact[0]=1;
  	for(int i=1;i<=n;i++)
    {
      fact *= i;
    }
  	int ld = fact%10;
  	while (ld == 0) {
            fact = fact / 10;
            ld = fact % 10;
        }
  cout<<ld<<endl;
    return 0;
}