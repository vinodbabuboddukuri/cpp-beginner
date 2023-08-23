#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,22,10,7};
    int sum = 33;
    for(int i=0;i<4;i++)
    {
        int initialsum=0;
        int firstindex=i;
        int lastindex=0;
        for(int j=i;j<4;j++)
        {
            initialsum=initialsum+a[j];
            if(initialsum==sum)
            {
                lastindex=j;
                break;
            }
            if(initialsum>sum)
            {
                break;
            }
            
        }
        if(lastindex !=0 )
            {
                cout<<firstindex<<" "<<lastindex;
            }
    }
}