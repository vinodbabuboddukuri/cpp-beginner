// Take an array 
// Sum array
// Average 
// Add the average to every single element in the array
// find the multiplication of the final array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,avg=0,mul=1;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    avg=sum/n;
    cout<<sum<<"\n";
    cout<<avg<<"\n";
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]+avg;
        cout<<v[i]<<" ";
        mul=mul*v[i];
    }
    cout<<"\n";
    cout<<mul;
}