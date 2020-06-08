/*Square Brackets
Send Feedback
You are given:
a positive integer n,
an integer k, 1<=k<=n,
an increasing sequence of k integers 0 < s1 < s2 < ... < sk <= 2n.
What is the number of proper bracket expressions of length 2n with opening brackets
appearing in positions s1, s2,...,sk?
Illustration
Several proper bracket expressions:
[[]][[[]][]] 
[[[][]]][][[]]
An improper bracket expression:
[[[][]]][]][[]]
There is exactly one proper expression of length 8 with opening brackets in 
positions 2, 5 and 7.
Task
Write a program which for each data set from a sequence of several data sets:
1. reads integers n, k and an increasing sequence of k integers from input,
2. computes the number of proper bracket expressions of length 2n with opening 
brackets appearing at positions s1,s2,...,sk,
3. writes the result to output.
Input
The first line of the input file contains one integer d, 1 <= d <= 10, which is 
the number of data sets. The data sets follow. Each data set occupies two lines of 
the input file. The first line contains two integers n and k separated by single 
space, 1 <= n <= 19, 1 <= k <= n. The second line contains an increasing sequence 
of k integers from the interval [1;2n] separated by single spaces.
Output
The i-th line of output should contain one integer - the number of proper bracket 
expressions of length 2n with opening brackets appearing at positions s1, s2,...,sk.
Sample Input
5 
1 1 
1 
1 1 
2 
2 1 
1 
3 1 
2 
4 2 
5 7 
Sample Output
1 
0 
2 
3 
2 
*/
#include <bits/stdc++.h>
using namespace std;
int recursive(int sum, int i, int n, int k, queue<int> q)
{
    if (i == n)
    {
        if (sum == 0)
            return 1;
        return 0;
    }
    if (sum < 0)
        return 0;
    if (!q.empty() && i == q.front() - 1)
    {
        q.pop();
        return recursive(sum + 1, i + 1, n, k, q);
    }

    else
        return recursive(sum - 1, i + 1, n, k, q) + recursive(sum + 1, i + 1, n, k, q);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        cout << recursive(0, 0, 2 * n, k, q) << endl;
    }
    return 0;
}