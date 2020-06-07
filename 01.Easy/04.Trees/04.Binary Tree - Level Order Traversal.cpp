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
vector<int> t;
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        
        return 1 + max(lh,rh);
    }

    vector<int> KthLevel(TreeNode* root,int k){
        if(root==NULL){
            return t;
        }
        if(k==1){
            t.push_back(root->val);
        }
        KthLevel(root->left,k-1);
        KthLevel(root->right,k-1);
        return t;
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int h = height(root);
        for(int i=1;i<=h;i++){
            vector<int> temp = KthLevel(root,i);
            result.push_back(temp);
            t.clear();
        }
        return result;
    }
};
