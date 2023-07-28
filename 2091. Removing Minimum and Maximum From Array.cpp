#include <bits/stdc++.h> 
class Solution {
public:
    int minimumDeletions(vector<int>& nums)
    {
        int max=INT_MIN,min=INT_MAX,h=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
                h=i;
            }
            if(min>nums[i])
            {
                min=nums[i];
                l=i;
            }
        }
        h++;
        l++;
        if(h<l)
        {
            int t=l;
            l=h;
            h=t;
        }
     
       if((nums.size()-(h-l)+1)<h&&(nums.size()-(h-l)+1)<(nums.size()-l+1))
       {
           return (nums.size()-(h-l)+1);
       }
       else if((nums.size()-l)<h)
       {
           return ((nums.size()-l)+1);
       }
     return h;
        
        
    }
};
