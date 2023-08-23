#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int fact=1;
    int cnt=0;
    for(int i=5;i<=n;i=i*5)
    {
        cnt += n/i;
    }
    // while(fact % 10 == 0 )
    // {
    //     cnt++;
    //     fact = fact/10;
    // }
    cout<<cnt<<endl;
    return 0;
}
