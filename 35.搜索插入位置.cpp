/**
 * @file 35_搜索插入位置.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
 *  如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 *  请必须使用时间复杂度为 O(log n) 的算法。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <vector>
using namespace std;

/**
 * @brief 
 *  use STL
 * 
 */
class Solution_1 {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    }
};

/**
 * @brief 
 *  二分法
 */
class Solution_2 {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1; 
            }
        }
        return left;
    }
};