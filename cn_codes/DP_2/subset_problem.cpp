/*
Subset Sum - Problem
Send Feedback
Given a set of n integers, find if a subset of sum k can be formed from the given 
set. Print Yes or No.

Input Format
First line contains a single integer n (1<=n<=1000)
Second line contains n space separated integers (1<=a[i]<=1000)
Last line contains a single positive integer k (1<=k<=1000)
Output Format
Output Yes if there exists a subset whose sum is k, else output No.
Sample Input
3
1 2 3
4
Sample Output
Yes
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int recur(int arr[], int n, int k, int i, int dp[][1000])
{
    if (k == 0)
        return 2;
    if (k < 0 || i == n)
        return 0;
    if (dp[i][k] >= 0)
        return dp[i][k];
    int a = recur(arr, n, k - arr[i], i + 1, dp), b = recur(arr, n, k, i + 1, dp);
    if (a > 0 || b > 0)
        dp[i][k] = 2;
    else
        dp[i][k] = 0;
    return dp[i][k];
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;

    memset(dp, -1, sizeof(dp));
    if (recur(arr, n, k, 0, dp))
        cout << "Yes";
    else
    {
        cout << "No";
    }

    // for (int j = 0; j < n; j++)
    //     cout << dp[j] << " ";
}