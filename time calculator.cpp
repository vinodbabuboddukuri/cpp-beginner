#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
    int a,b;cin>>a>>b;//scanning the given time
  	int tt=a*60+b;//converting hours into minutes
  	int tl=(24*60)-tt;//subtracting given time from total time
  	cout << setw(2) << setfill('0')<<tl/60<<"::"<<setw(2) << setfill('0')<<tl%60;
    //tl/60 for hours
    //tl%60 for minutes
    return 0;
}