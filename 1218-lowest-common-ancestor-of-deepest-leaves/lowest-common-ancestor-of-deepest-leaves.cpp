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
    // Helper function to return both the depth and LCA
    pair<int, TreeNode*> dfs(TreeNode* root) {
        if (!root) return {0, nullptr}; // Base case: return depth 0 and null node
        
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        
        int leftDepth = left.first, rightDepth = right.first;
        
        if (leftDepth > rightDepth) {
            return {leftDepth + 1, left.second}; // Left subtree is deeper
        } else if (rightDepth > leftDepth) {
            return {rightDepth + 1, right.second}; // Right subtree is deeper
        } else {
            return {leftDepth + 1, root}; // Both are equal, so current node is LCA
        }
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).second; // Return the LCA found from DFS
    }
};
