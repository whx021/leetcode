/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <string>
#include <stack>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket_stack;
        char left_bracket, right_bracket;
        for (int i = 0; s[i] != '\0'; ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                bracket_stack.push(s[i]);
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (bracket_stack.empty()) {
                    return false;
                }
                left_bracket = bracket_stack.top();
                bracket_stack.pop();
                right_bracket = s[i];
                if (!isValid(left_bracket, right_bracket)) {
                    return false;
                }
            }
        }
        if (!bracket_stack.empty()) {
            return false;
        } else {
            return true;
        }
    }

    bool isValid(const char& left_bracket, const char& right_bracket) {
        if (left_bracket == '(' && right_bracket == ')') {
            return true;
        } else if (left_bracket == '[' && right_bracket == ']') {
            return true;
        } else if (left_bracket == '{' && right_bracket == '}') {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket_stack;
        char left_bracket, right_bracket;
        for (int i = 0; s[i] != '\0'; ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                bracket_stack.push(s[i]);
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (bracket_stack.empty()) {
                    return false;
                }
                left_bracket = bracket_stack.top();
                bracket_stack.pop();
                right_bracket = s[i];
                if (!isValid(left_bracket, right_bracket)) {
                    return false;
                }
            }
        }
        if (!bracket_stack.empty()) {
            return false;
        } else {
            return true;
        }
    }

    bool isValid(const char& left_bracket, const char& right_bracket) {
        if (left_bracket == '(' && right_bracket == ')') {
            return true;
        } else if (left_bracket == '[' && right_bracket == ']') {
            return true;
        } else if (left_bracket == '{' && right_bracket == '}') {
            return true;
        } else {
            return false;
        }
    }
};