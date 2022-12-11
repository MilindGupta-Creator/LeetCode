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
    
    int dfs(TreeNode* root, int &ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int leftcall  = dfs(root->left,ans);
        int rightcall = dfs(root->right,ans);
        
        int straightpathmax = max(max(leftcall,rightcall)+root->val,root->val);
        int curvedmax = max(leftcall+rightcall+root->val,straightpathmax);
        
        ans = max(ans,curvedmax);
        
        return straightpathmax;
    }
    
    
    int maxPathSum(TreeNode* root) {
        /*
        
                5
              /  \
             6    3 
            / \    \
           5   -8   -9
                    \
                    10
                 
        straightmax => it is the sum if that node is a part of max sum
        curved =>   it is a sum if root is a part of the max sum
        straightpathmax this includes some of numbers like 5+6+5
        and curved includes 5+6+(-8)
        and ans includes combination of both straight and curved
        
        
        */
        
        if(root==NULL)
        {
            return 0;
        }
        
        int ans = INT_MIN;
        
        dfs(root,ans);
        return ans;
    }
};