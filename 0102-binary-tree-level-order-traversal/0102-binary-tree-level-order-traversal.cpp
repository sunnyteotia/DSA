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
    void bfs(TreeNode* root, vector<vector<int>>&v){
        if(root==NULL)return ;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>ans;
            level++;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
            q.pop();
            ans.push_back(node->val);
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            }
            v.push_back(ans);
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        bfs(root,v);
        return v;
    }
};