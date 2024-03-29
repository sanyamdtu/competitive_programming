/*
All possible ways
Send Feedback
Given two integers a and b. You need to find and return the count of possible ways 
in which we can represent the number a as the sum of unique integers raise to the 
power b.
For eg. if a = 10 and b = 2, only way to represent 10 as -
10 = 1^2 + 3^2 
Hence, answer is 1.
Note : x^y represents x raise to the power y
Inout Format :
Two integers a and b (separated by space)
Output Format :
Count
Constraints :
1 <= a <= 10^5
1 <= b <= 50
Sample Input 1 :
10 2
Sample Output 1 :
1
Sample Input 2 :
100 2
Sample Output 2 :
3
*/
#include <bits/stdc++.h>
using namespace std;
int func(int a, int b, int j = 1, int dp[][50])
{
    if (a < 0)
        return 0;
    if (a == 0)
    {
        cout << endl;
        return 1;
    }
    if (dp[a][j] >= 0)
        return dp[a][j];
    int ans = 0;
    for (int i = j; a >= pow(i, b); i++, dp)
        ans += func(a - pow(i, b), b, i + 1, dp);
    dp[a][j] = ans;
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int dp[100000][50];
    memset(dp, -1, sizeof(dp));
    cout << func(a, b, 1, dp);
}