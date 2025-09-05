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
    void bfs(vector<vector<int>>&ans,TreeNode* root){
        if(root==NULL)return;
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            level++;
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);
                    if(node->left!=NULL)q.push(node->left);
                    if(node->right!=NULL)q.push(node->right);
            }
            if(level%2==0){
                reverse(v.begin(),v.end());
                cout<<v[0]<<endl;
            }
            ans.push_back(v);
        }
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        bfs(ans,root);
        return ans;
    }
};