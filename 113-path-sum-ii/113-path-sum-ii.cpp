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
    
     void backtrack(TreeNode* root,int sum, vector<int>&path , vector<vector<int>>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        path.push_back(root->val);
        if(root->left==NULL and root->right==NULL and sum==root->val)
        {
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        backtrack(root->left,sum-root->val,path,ans);
        backtrack(root->right,sum-root->val,path,ans);
        
        path.pop_back();
        
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        
        backtrack(root,targetSum,path,ans);
        return ans;
    }
};