/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 0; i + 1 < prices.size(); ++i) {
            if (prices[i] < prices[i + 1]) {
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};
// @lc code=end

// c solution
int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    for (int i = 0; i + 1 < pricesSize; ++i) {
        if (prices[i] < prices[i + 1]) {
            profit += prices[i + 1] - prices[i];
        }
    }
    return profit;
}

int main(void) {
    return EXIT_SUCCESS;
}

// cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 0; i + 1 < prices.size(); ++i) {
            if (prices[i] < prices[i + 1]) {
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};