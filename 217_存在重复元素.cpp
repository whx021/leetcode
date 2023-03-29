/**
 * @file 217_存在重复元素.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给你一个整数数组 nums 。
 *  如果任一值在数组中出现 至少两次 ，返回 true ；
 *  如果数组中每个元素互不相同，返回 false 。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// solution 1
class solution {
public: 
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num = nums.size();
        for (int i = 0; i < num - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }   
        return false;
    }
};

int partition(int nums[], int left, int right) {
    int pivot = nums[left];
    while (left < right) {
        while (left < right && nums[right] >= pivot) {--right;}
        if (left < right) {nums[left] = nums[right]; ++left;}
        while (left < right && nums[left] < pivot) {++left;}
        if (left < right) {nums[right] = nums[left]; --right;}
    }
    nums[left] = pivot;
    return left;
}

void quickSort(int nums[], int left, int right) {
    if (left < right) {
        int pivot = partition(nums, left, right);
        quickSort(nums, left, pivot - 1);
        quickSort(nums, pivot + 1, right);
    }
}

/*
 * main function : 超时(over time)
 * depend function : quickSort
 * parameter 1 : array[]
 * parameter 2 : size of array[]
 */
bool containsDuplicate(int* nums, int numsSize) {
    quickSort(nums, 0, numsSize - 1);

    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

void printArray(int arr[], int length);

void test(void) {
    int nums[] = {8, 6, 6, 5, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // //test quickSort
    // {   
    // cout << "Before sort" << endl;
    // printArray(nums, numsSize);

    // quickSort(nums, 0, numsSize - 1);

    // cout << "After sort" << endl;
    // printArray(nums, numsSize);
    // }

    if (containsDuplicate(nums, numsSize)) {
        cout << "存在重复元素" << endl;
    }
    else {
        cout << "不存在重复元素" << endl;
    }
}

int main(void) {
    test();
    return EXIT_SUCCESS; 
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "array[" << i << "] = " << arr[i] << endl;
    }
}