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
    TreeNode*makeBST(vector<int>& nums,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = start + (end - start)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = makeBST(nums,start,mid-1);
        node->right = makeBST(nums,mid+1,end);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return NULL;
        }
        return makeBST(nums,0,n-1);
    }
};
