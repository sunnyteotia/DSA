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
    void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL)return ;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        map<int,int>m;
        // int level=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto point=q.front();
                q.pop();
                TreeNode* node=point.first;
                int s=point.second;
                if(m.find(s)==m.end()){
                    ans.push_back(node->val);
                    m[s]=1;
                }
                if(node->right!=NULL)q.push({node->right,s+1});
                if(node->left!=NULL)q.push({node->left,s+1});
            }
            // level++;
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;
    }
};