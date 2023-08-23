
//reversing array by using two pointers
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      int *p1 = arr;
      int *p2 = arr + n - 1;
      while (p1 < p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
      }
      for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}



//iterating half of the array & swapping
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp;
      for (int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
      }
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
  }
    return 0;
}



//By using inbuilt function
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  //size of an array
    cin >> n;   //scanning n value
    int arr[n]; //declaring array
    for(int i=0;i<n;i++)    //iterating the array 
    {
        cin>>arr[i];    //scanning the array elements
    }
    for(int i=0;i<n;i++)
    {
        reverse(arr, arr + n);  //inbuilt function for reversing
        cout<<arr[i]<<" ";  //printing the array elements
    }
    return 0;
}