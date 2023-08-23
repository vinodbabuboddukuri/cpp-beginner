#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res;
    cin >> n;
    if ((n & (n - 1)) == 0 && n % 3 == 1) 
        {
            cout<<"True"<<endl;
        }
        else
            cout<<"False"<<endl;
            
    return 0;
}
