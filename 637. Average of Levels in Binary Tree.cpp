

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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL) return {0};
        vector<double> ans;
        queue <TreeNode*> q;
        
        q.push(root);
        while(!q.empty())
        {
            double s=0;
            int si=q.size();
    
            for(int i=0;i<si;i++)
            {
                TreeNode* top=q.front();
                q.pop();
                if(top->left!=NULL) q.push(top->left); 
                if(top->right!=NULL) q.push(top->right);
                s=s+top->val;
            }
            s=s/si;
            ans.push_back( s );
        }
        return ans;
    }
};
