class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur_dif=0;
        int max_dif=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
            }
            cur_dif=max(prices[i]-min,cur_dif);
            max_dif=max(cur_dif,max_dif);
            
        }
        return (max_dif);
        
    }
};
