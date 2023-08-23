#include <iostream>
using namespace std;


int largestNo(int arr[],int n,int i,int maxi)
{
    if(i==n)
    {
        return maxi;
    }
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    return largestNo(arr,n,i+1,maxi);
}

int main() {
	// your code goes here 
	int n,k,out;cin>>n>>k;
	int arr[100];
	while(k--)
	{
	    int s;cin>>s;
	    int e;cin>>e;
	    int val;cin>>val;
	    for(int i=s-1;i<e-1;i++)
	    {
	        arr[i]=arr[i]+val;
	    }
	}
	out=largestNo(arr,n,0,arr[0]);
	cout<<out;
	
	return 0;
}





examples: 

5 3
1 2 100
2 4 100
3 5 100


output:
200