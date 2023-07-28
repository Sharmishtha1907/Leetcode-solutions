class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum= nums[0];
        int max_sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int a=nums[i];
            cur_sum=max(cur_sum+a,a);
            max_sum=max(max_sum,cur_sum);
        }
        return(max_sum);
        
    }
};
