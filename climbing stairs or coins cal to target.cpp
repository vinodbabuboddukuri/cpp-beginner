#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
  int n;cin>>n;
    vector<int>dp(n);
        dp[0]=1;dp[1]=1;dp[2]=3;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout<<dp[n];
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main() 
// {
// // Try out your code here
//   int n;cin>>n;
//     vector<ll>dp(n,0);
//         dp[0]=1;dp[1]=1;dp[2]=3;
//         for(int i=3;i<=n;i++){
//             dp[i]=dp[i-1]+dp[i-2];
//         }
//         cout<<dp[n];
//     return 0;
// }