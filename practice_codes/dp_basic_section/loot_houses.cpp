/*
include<bits/stdc++.h>
int getMaxMoney(int arr[], int n){

	/*Write your code here.
	 *Don’t write main(). 
	 *Don’t take input, it is passed as function argument.
	 *Don’t print output.
	 *Taking input and printing output is handled automatically.
         */
int dp[n + 1];
memset(dp, 0, sizeof(dp));
for (int i = 1; i <= n; i++)
{
    (dp[i - 2] + arr[i - 1] > dp[i - 1]) ? dp[i] = dp[i - 2] + arr[i - 1] : dp[i] = dp[i - 1];
}
return dp[n];
