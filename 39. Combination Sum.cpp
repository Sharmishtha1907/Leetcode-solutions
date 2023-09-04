class Solution {
public:
vector<vector<int>> v;

 void func(vector<int>& candidates,int target,int i,vector <int> &ds)
 { 
      if(target==0)
      {
         v.push_back(ds);
         return;
      }
    
     if(target<0){
         return;
     }
     if(i==candidates.size()) return;
     ds.push_back(candidates[i]);
     target= target - candidates[i];
     func(candidates,target,i,ds);
     ds.pop_back();
     target= target + candidates[i];
     func(candidates,target,i+1,ds);
 }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> ds;
        func(candidates,target,0,ds);
        return v;

    }
};
