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
    
     int mod = 1000000007;
    void preorder(TreeNode* root , int &sum){
        if(root==NULL){
            return ;
        }
        sum += root->val;
        preorder(root->left , sum);
        preorder(root->right , sum);
    }

    long long postorder(TreeNode* root , long long &max_pro , int tot_sum){
        if(root==NULL){
            return 0;
        }
        long long  left = postorder(root->left , max_pro , tot_sum);
        long long  right = postorder(root->right , max_pro , tot_sum);
        long long  pro1 = (left * (tot_sum-left));
        long long  pro2 = (right * (tot_sum-right));
        if(pro1 >pro2){
            if(max_pro < pro1){
                max_pro = pro1;
            }
        }
        else{
            if(max_pro < pro2){
                max_pro = pro2;
            }
        }
        return (left + right + root->val);
    }

    
    int maxProduct(TreeNode* root) {
         int tot_sum=0;
        // Using preorder traversal technique to find the total sum of all nodes.
        preorder(root , tot_sum);

        // Using postorder traversal technique to find the maximum product
        long long max_pro =0 ;
        postorder(root , max_pro , tot_sum);
        max_pro = max_pro%mod;
        return (int)max_pro;
    }
};