#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,max,min;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}

//time complexity:O(n)