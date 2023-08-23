485. Max Consecutive Ones
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
____________________________________________________________________________________
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                maxi=max(cnt,maxi);
            }
            else{
                cnt=0;
            }
        }
        return maxi;
    }
};


____________________________________________________________________________________
#include <bits/stdc++.h>
using namespace std;
int finCon(vector<int> v,int k)
{
    int cnt=0,maxi=0;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }else
        {
            cnt=0;
        }
    }
    return maxi;
}

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }  
    int x;cin>>x;
    cout<<finCon(v,x);

    return 0;
}