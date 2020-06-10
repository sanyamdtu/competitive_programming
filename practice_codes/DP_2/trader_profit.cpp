/*
Trader Profit
Send Feedback
Mike is a stock trader and makes a profit by buying and selling stocks. He buys a 
stock at a lower price and sells it at a higher price to book a profit. He has come
to know the stock prices of a particular stock for n upcoming days in future and 
wants to calculate the maximum profit by doing the right transactions (single 
transaction = buying + selling). Can you help him maximize his profit?
Note: A transaction starts after the previous transaction has ended. Two transactions
can't overlap or run in parallel.
The stock prices are given in the form of an array A for n days.
Given the stock prices and a positive integer k, find and print the maximum profit 
Mike can make in at most k transactions.
Input Format
The first line of input contains an integer q denoting the number of queries.

The first line of each test case contains a positive integer k, denoting the number 
of transactions. 

The second line of each test case contains a positive integer n, denoting the length 
of the array A.

The third line of each test case contains n space-separated positive integers, 
denoting the prices of each day in the array A.
Constraints
1<=q<=100

0<k<10

2<=n<=30

0<=elements of array A<=1000
Output Format
For each query print the maximum profit earned by Mike on a new line. 
Sample Input
3
2
6
10 22 5 75 65 80
3
4
20 580 420 900
1
5
100 90 80 50 25
Sample Output
87
1040
0
*/

#include <bits/stdc++.h>
using namespace std;
//flag true means i have to buy
int ans(int i, int count, int flag, int n, int arr[], int k, int dp[][11][2])
{
    if (i == n || count == k)
        return 0;
    if (dp[i][count][flag] != -1)
        return dp[i][count][flag];
    if (flag)
    {
        dp[i][count][flag] = max(ans(i + 1, count, 0, n, arr, k, dp) - arr[i], ans(i + 1, count, 1, n, arr, k, dp));
        return dp[i][count][flag];
    }
    else
        dp[i][count][flag] = max(ans(i + 1, count + 1, 1, n, arr, k, dp) + arr[i], ans(i + 1, count, 0, n, arr, k, dp));
    return dp[i][count][flag];
}
int main()
{
    int q;
    cin >> q;
    int dp[31][11][2];
    memset(dp, -1, sizeof(dp));
    while (q--)
    {
        int k, n;
        cin >> k >> n;
        int arr[n], profit;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << ans(0, 0, 1, n, arr, k, dp) << endl;
    }
}