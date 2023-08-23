#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=i;j<n;j++)
            {
                if(v[j]>v[i])
                {
                    temp=1;
                    break;
                }
                
            }
            if(temp==0)
            {
                cout<<v[i]<<" ";
            }
        }
}