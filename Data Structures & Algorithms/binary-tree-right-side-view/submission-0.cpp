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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        vector<vector<int>> vec;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz= q.size();

            vector<int> level;

            for(int i=0; i<sz; i++){
                TreeNode* node= q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            vec.push_back(level);
        }

        for(auto v: vec){
            int m= v.size();

            ans.push_back(v[m-1]);
        }

        return ans;
    }
};
