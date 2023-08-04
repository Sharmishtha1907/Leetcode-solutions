class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a0=0,a1=0,a2=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
               a0++;
            }
            if(nums[i]==1)
            {
                a1++;
            }
            if(nums[i]==2)
            {
                a2++;
            }
        }
        int i=0;
        while (a0>0)
        {
            nums[i]=0;
            a0--;
            i++;
        }
        while (a1>0)
        {
            nums[i]=1;
            a1--;
            i++;
        }
        while (a2>0)
        {
            nums[i]=2;
            a2--;
            i++;
        }
    }
};
