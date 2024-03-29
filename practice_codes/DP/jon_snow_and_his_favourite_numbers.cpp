/*
Jon Snow and his favourite number
Send Feedback
Jon Snow now has to fight with White Walkers. He has n rangers, each of which has his
own strength. Also Jon Snow has his favourite number x. Each ranger can fight with a
white walker only if the strength of the white walker equals his strength. He
however thinks that his rangers are weak and need to improve. Jon now thinks that
if he takes the bitwise XOR of strengths of some of rangers with his favourite 
number x, he might get soldiers of high strength. So, he decided to do the following
operation k times:
Arrange all the rangers in a straight line in the order of increasing strengths.
Take the bitwise XOR of the strength of each alternate ranger with x and update it's
strength.
Suppose, Jon has 5 rangers with strengths [9, 7, 11, 15, 5] and he performs the 
operation 1 time with x = 2. He first arranges them in the order of their strengths, 
[5, 7, 9, 11, 15]. Then he does the following:
The strength of first ranger is updated to 5 xor 2, i.e. 7.
The strength of second ranger remains the same, i.e. 7.
The strength of third ranger is updated to 9 xor 2, i.e. 11.
The strength of fourth ranger remains the same, i.e. 11.
The strength of fifth ranger is updated to 15 xor 2, i.e. 13.
The new strengths of the 5 rangers are [7, 7, 11, 11, 13]
Now, Jon wants to know the maximum and minimum strength of the rangers after 
performing the above operations k times. He wants your help for this task. Can you 
help him?
Input
First line consists of three integers n, k, x (1 ≤ n ≤ 10^5, 0 ≤ k ≤ 10^5, 
0 ≤ x ≤ 10^3) — number of rangers Jon has, the number of times Jon will carry out the
operation and Jon's favourite number respectively.

Second line consists of n integers representing the strengths of the rangers a1, 
a2, ..., an (0 ≤ ai ≤ 10^3).
Output
Output two integers, the maximum and the minimum strength of the rangers after 
performing the operation k times.
Sample Input
5 1 2
9 7 11 15 5
Sample Output
13 7
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1025][10000];
int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
        dp[arr[i]][0]++;

    for (int i = 1; i <= k; i++)
    {
        int flag = 1;
        for (int j = 0; j < 1025; j++)
        {
            if (dp[j][i - 1] >= 1)
            {
                int rec = j;
                if (flag == 0)
                    rec ^= x;
                dp[rec ^ x][i] += (dp[j][i - 1]) / 2 + dp[j][i - 1] % 2;
                dp[rec][i] += dp[j][i - 1] / 2;
                flag = (dp[j][i - 1] + flag) % 2;
            }
        }
    }
    int mini = 0, maxi = 0;
    for (int i = 0;; i++)
        if (dp[i][k] >= 1)
        {
            mini = i;
            break;
        }

    for (int i = 1024;; i--)
        if (dp[i][k] >= 1)
        {
            maxi = i;
            break;
        }
    cout << maxi << " " << mini;
}