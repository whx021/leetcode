/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int i = 0;
        int j = 0;
        while (j < nums.size()) {
            if (nums[j] != nums[i]) {
                nums[++i] = nums[j++];
            } else {
                ++j;
            }
        }
        return i + 1;
    }
};
// @lc code=end

// cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int i = 0;
        int j = 0;
        while (j < nums.size()) {
            if (nums[j] != nums[i]) {
                nums[++i] = nums[j++];
            } else {
                ++j;
            }
        }
        return i + 1;
    }
};

// c
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 1) {
        return 1;
    }
    int i = 0;
    int j = 0;
    while (j < numsSize) {
        if (nums[j] != nums[i]) {
            nums[++i] = nums[j++];
        } else {
            ++j;
        }
    }
    return i + 1;
}

void test(void) {
    int nums[] = {1, 2, 3, 4, 4, 6, 7, 7};
}

int main(void) {
    return EXIT_SUCCESS;
}