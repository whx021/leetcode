/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */
#include <vector>
#include <stack>
using namespace std;
// @lc code=start
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> stk;
        TreeNode* p = root;
        while (!stk.empty() || p != nullptr) {
            while (p != nullptr) {
                stk.push(p);
                p = p->left;
            }
            p = stk.top();
            stk.pop();
            ret.push_back(p->val);
            p = p->right;
        }
        return ret;
    }
};
// @lc code=end

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// solution 1 use recursion

// solution 2 use stack
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> stk;
        TreeNode* p = root;
        while (!stk.empty() || p != nullptr) {
            while (p != nullptr) {
                stk.push(p);
                p = p->left;
            }
            p = stk.top();
            stk.pop();
            ret.push_back(p->val);
            p = p->right;
        }
        return ret;
    }
};