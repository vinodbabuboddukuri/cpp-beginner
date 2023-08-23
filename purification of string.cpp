#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here //
    string str;cin>>str;
  	string sf="";
  	for(int i=0;i<str.size();i++)
    {
      if(str[i] !='E' && str[i] !='F' && str[i] !='G')//if(!(str[i]==65 && str[i]==90))
      {
        sf +=str[i];
      }
      //cout<<sf;
    }
  	cout<<sf;
    return 0;
}