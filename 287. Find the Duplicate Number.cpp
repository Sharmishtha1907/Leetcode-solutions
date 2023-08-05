class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector <int> n (nums.size()+1,0);

        for(int i=0;i<nums.size();i++)
        {
            n[nums[i]]++;
        }

        for(int i=0;i<n.size();i++)
        {
            if(n[i]>1)
            {
                return i;
            }
        }
        
        return 0;

        
    }
};
