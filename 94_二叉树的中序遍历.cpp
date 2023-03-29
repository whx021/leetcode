/**
 * @file 94_二叉树的中序遍历.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// solution 1 use recursion
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ret) {
        if (root != nullptr) {
            inorder(root->left, ret);
            ret.push_back(root->val);
            inorder(root->right, ret);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        if (root != nullptr) {
            vector<int> ret;
            inorder(root, ret);
            return ret;
        }
    }
};

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