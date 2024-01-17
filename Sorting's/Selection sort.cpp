//Selection sort("searching for the small element and moving it to left side of an array")
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(arr[j]<arr[i])
	        {
	            int temp=arr[j];
	            arr[j]=arr[i];
	            arr[i]=temp;
	        }
	    }
	}
	
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
