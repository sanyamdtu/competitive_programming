/*
Knapsnack - Problem
Send Feedback
A thief robbing a store and can carry a maximal weight of W into his knapsack. 
There are N items and ith item weigh wi and is of value vi. What is the 
maximum value V, that thief can take ?
Space complexity should be O(W).
Input Format :
Line 1 : N i.e. number of items
Line 2 : N Integers i.e. weights of items separated by space
Line 3 : N Integers i.e. values of items separated by space
Line 4 : Integer W i.e. maximum weight thief can carry
Output Format :
Line 1 : Maximum value V
Constraints
1 <= N <= 10^4
1<= wi <= 100
1 <= vi <= 100
Sample Input 1 :
4
1 2 4 5
5 4 8 6
5
Sample Output :
13
*/
#include <bits/stdc++.h>
using namespace std;
int knapsackiter(int w[], int v[], int maxw, int n)
{
    int dp[10000][100];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= maxw; j++)
        {
            if (j == 0 || i == 0)
                dp[i][j] = 0;
            else
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }
    return dp[n][maxw];
}
int n, maxw;
int knapsackrecur(int w[], int v[], int weight, int i, int n, int **dp)
{
    if (i == n || weight == 0)
        return weight;
    if (dp[i][weight] >= 0)
        return dp[i][weight];
    int a1 = (knapsackrecur(w, v, weight, i + 1, n, dp));
    if (weight - w[i] < 0)
    {
        dp[i][weight] = a1;
        return a1;
    }

    else
    {
        int a2 = (knapsackrecur(w, v, weight - w[i], i + 1, n, dp)) + v[i];
        dp[i][weight] = max(a1, a2);
        return max(a1, a2);
    }
}
int main()
{

    cin >> n >> maxw;
    int w[n], v[n];
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int **dp = new int *[n + 1];
    for (int i = 0; i < n + 1; i++)
        dp[i] = new int[maxw + 1];
    memset(dp, -1, sizeof(dp));
    cout << knapsackrecur(w, v, maxw, 0, n, dp) << endl;
    //cout << knapsackiter(w, v, maxw, n);
}