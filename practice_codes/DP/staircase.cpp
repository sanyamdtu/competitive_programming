/*
StairCase Problem
Send Feedback
A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.
Time complexity of your code should be O(n).
Input format :
Integer n (No. of steps)
Constraints :
n <= 70
Sample Input 1:
4
Sample Output 1:
7
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    ll dp[71];
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    cout<<dp[n];
}