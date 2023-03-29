/**
 * @file 104_二叉树的最大深度.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给定一个二叉树，找出其最大深度。
 *  二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 *  说明: 叶子节点是指没有子节点的节点。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// solution 1
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};  