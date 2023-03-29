/**
 * @file 14_最长公共前缀.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  编写一个函数来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;


/**
 * @brief 
 *  横向扫描法
 */
class Solution_1 {
public:
    /**
     * @brief 
     *  get the longest common prefix in string array
     * @param strs 
     * @return string 
     */
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) {
            return "";
        }
        string prefix = strs[0];    // initialization the common prefix 
        int count = strs.size();    // record the number of compare string 
        for (int i = 0; i < count; ++i) {
            prefix = longestCommonPrefix(prefix, strs[i]);
            if (!prefix.size()) {   // prefix.size() == 0
                break;
            }
        }
        return prefix;
    }

    /**
     * @brief 
     *  get the longest common prefix between str1 and str2
     * @param str1 
     * @param str2 
     * @return string 
     */
    string longestCommonPrefix(const string& str1, const string& str2) {
        int length = min(str1.size(), str2.size());
        int index = 0;  // record the number of common prefix characters 
        while (index < length && str1[index] == str2[index]) {
            ++index;
        }
        return str1.substr(0, index);
    }
};

/**
 * @brief 
 *  纵向扫描法
 */
class Solution_2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) {
            return "";
        }
        int length = strs[0].size();
        int count = strs.size();
        for (int i = 0; i < length; ++i) {
            char c = strs[0][i];    // i column compare character
            for (int j = 1; j < count; ++j) {
                if (i == strs[j].size() || c != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};