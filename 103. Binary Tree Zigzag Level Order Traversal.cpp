/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        
        vector<vector<int>>ans;
        bool b=0;
        queue <TreeNode*> st;
        st.push(root);
        while (!st.empty())
        {
            int s=st.size();
            vector<int> v;
            for(int i=0;i<s;i++){
             TreeNode* top=st.front();
             st.pop();
             v.push_back(top->val);
             if(top->left!=NULL)
             {
                 st.push(top->left);
             }
             if(top->right!=NULL)
             {
                 st.push(top->right);
             }
             
            }
            if(b==1)
            {
                reverse(v.begin(),v.end());
            }
            b=!b;
            ans.push_back(v);
            v.clear();
            
        }

        return ans;
    }
};