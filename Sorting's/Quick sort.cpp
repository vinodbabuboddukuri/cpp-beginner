//Quick sort("most efficent,divide and conqure technique,")
//taking one pivot element and arranging them pivot less than numbes at left and rest to the write
#include <bits/stdc++.h>
using namespace std;

void swap(int arr[],int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

 
int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return i+1;
}
void quickSort(int arr[],int l, int h){
    if(l<h){
        int pi=partition(arr,l,h);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,h);
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
