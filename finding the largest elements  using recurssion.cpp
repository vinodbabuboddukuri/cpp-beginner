//Find the largest amount given array using function and without using looping and pre-defined function

#include <bits/stdc++.h>
using namespace std;
int largestNo(int arr[],int n,int i,int maxi)
{
    if(i==n)
    {
        return maxi;
    }
    if(arr[i]>maxi)//for smallest use this <
    {
        maxi=arr[i];
    }
    return largestNo(arr,n,i+1,maxi);
}

int main() {
	// your code goes here
    int arr[20];
    int n,op;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    op=largestNo(arr,n,0,arr[0]);
    cout<<op;
	return 0;
}
