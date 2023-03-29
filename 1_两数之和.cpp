/**
 * @file 1_两数之和.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief
 *  给定一个整数数组 nums 和一个整数目标值 target，
 *  请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。 
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

// cpp
// Time Complexity : O(n^2)
// Spatial Complexity : O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};

// C
// Time Complexity : O(n^2)
// Spatial Complexity : O(1)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}