/**
 * @file 3.旋转数组.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

// // solution 1
// void rotate(int* nums, int numsSize, int k) {
//     if (numsSize == 1) return;
//     k %= numsSize;
//     if (k == 0) return;

//     int arr[numsSize] = {0};
//     for (int i = 0; i < k; ++i) {
//         arr[i] = nums[numsSize - k + i];
//     }
//     for (int i = 0; i < numsSize - k; ++i) {
//         arr[k + i] = nums[i];
//     }
//     for (int i = 0; i < numsSize; ++i) {
//         nums[i] = arr[i];
//     }
// }

// solution 2
void reverse(int *nums, int left, int right) {
    int temp;
    for (int i = left, j = right; i < j; ++i, --j) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

/*
 * main function
 * depend function : reverse
 * parameter 1 : array[]
 * parameter 2 : the size of array[]
 * parameter 3 : rotate times
 */
void rotate(int *nums, int numsSize, int k) {
    if (numsSize == 1) {
        return;
    }
    k %= numsSize;
    if (k == 0) {
        return;
    }
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);
}

// test function
void printArray(int arr[], int length);

void test(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    cout << "Before rotate" << endl;
    printArray(arr, length);

    rotate(arr, length, 12);

    cout << "After rotate" << endl;
    printArray(arr, length);
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