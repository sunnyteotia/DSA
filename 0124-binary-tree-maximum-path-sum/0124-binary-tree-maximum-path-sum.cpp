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
    int solve(int& sum,TreeNode* root){
        if(root==NULL)return 0;
        int left=max(0,solve(sum,root->left));
        int right=max(0,solve(sum,root->right));
        sum=max(sum,left+right+root->val);
        return max(left,right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
          int sum = INT_MIN; 
        solve(sum,root);
        return sum;
    }
};