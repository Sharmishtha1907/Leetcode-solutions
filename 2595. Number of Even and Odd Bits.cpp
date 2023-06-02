class Solution {
public:
    vector<int> evenOddBit(int n) {
        int o=0,e=0;
        for(int i=0;i<10;i++)
        {
            if((n & (1<<i))!=0 && i%2==0)
            {
               e++;
            }
            else if((n & (1<<i))!=0 && i%2!=0)
            {
                o++;
            }
        }

        return {e,o};
    }
};
