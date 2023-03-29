/**
 * @file 26_删除有序数组中的重复项.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给你一个 升序排列 的数组 nums ，
 *  请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，
 *  返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

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
        }
        else {
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