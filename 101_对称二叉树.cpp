/**
 * @brief 
 *  给你一个二叉树的根节点 root ， 检查它是否轴对称。
 */

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// cpp
class Solution {
public:
    bool check(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        else if (p == nullptr || q == nullptr) {
            return false;
        }
        else if (p->val != q->val) {
            return false;
        }
        else {
            return check(p->left, q->right) && check(p->right, q->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};