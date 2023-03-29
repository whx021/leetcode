/**
 * @file 122_买卖股票的最佳时机 II.cpp
 * @author whx (huxinwang021@gmail.com)
 * @brief 
 *  给你一个整数数组 prices ，其中 prices[i] 表示某支股票第 i 天的价格。
 *  在每一天，你可以决定是否购买和/或出售股票。你在任何时候 最多 只能持有 一股 股票。
 *  你也可以先购买，然后在 同一天 出售。
 *  返回 你能获得的 最大 利润
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

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