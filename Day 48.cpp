//Leetcode problem 94 Binary tree inorder traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }

    void inorder(TreeNode* node, vector<int>& res) {
        if (node == nullptr) return;
        inorder(node->left, res); 
        res.push_back(node->val);   
        inorder(node->right, res);  
    }
};
