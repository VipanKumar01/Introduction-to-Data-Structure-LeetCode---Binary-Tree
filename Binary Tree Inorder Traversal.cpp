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

// Inorder Tree Traversal

class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
      
// Inorder Tree Traversal
      
        if (root==NULL)return;
        
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
        
//         I Think this line contains some logic to push right data But Not.
        // ans.push_back(root->val);


    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        helper(root,ans);
        return ans;
        
        
    }
};
