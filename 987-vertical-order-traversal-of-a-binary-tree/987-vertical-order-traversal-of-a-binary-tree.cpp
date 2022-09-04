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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;  // vertical,level,nodes
        // this mapping is of vertical to the nodes
        queue<pair<TreeNode*, pair<int, int>>> q; // nodes,vertical,level
        
        q.push({root, {0, 0}});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            TreeNode *Node = p.first;
            int vertical = p.second.first;
            int level = p.second.second;
            
            mp[vertical][level].insert(Node->val);
            
            if(Node->left)
            {
                q.push({Node->left,{vertical-1,level+1}});
            }
            if(Node->right)
            {
                q.push({Node->right,{vertical+1,level+1}});
            }
        }
        
        vector<vector<int>>ans;
        for(auto& p : mp)
        {
            vector<int> vec;
            for(auto& q : p.second) // we are inside multiset now
            {
                for(auto& n : q.second) // we are inside the 2nd part that has nodes
                vec.push_back(n);
            }
            ans.push_back(vec);
        }
        
        return ans;
        
        
    }
};