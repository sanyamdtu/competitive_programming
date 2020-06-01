/*
LCSin - Problem
Send Feedback
Given 2 strings of S1 and S2 with lengths m and n respectively, find the length of 
longest common subsequence.
A subsequence of a string S whose length is n, is a string containing characters in 
same relative order as they are present in S, but not necessarily contiguous. 
Subsequences contain all the strings of length varying from 0 to n. E.g. subsequences 
of string "abc" are - "",a,b,c,ab,bc,ac,abc.
Input Format :
Line 1 : String S1
Line 2 : String s2
Output Format :
Line 1 : Length of lcsin
Sample Input :
adebc
dcadb
Sample Output :
3
*/
#include <bits/stdc++.h>
using namespace std;
int lcsrecur(string a, string b, int i, int j, int dp[][100])
{
    if (a[i] == '\0' || b[j] == '\0')
        return 0;
    if (dp[i][j])
        return dp[i][j];
    if (a[i] == b[j])
    {
        return dp[i][j] = 1 + (lcsrecur(a, b, i + 1, j + 1, dp));
    }
    return dp[i][j] = max(lcsrecur(a, b, i + 1, j, dp), lcsrecur(a, b, i, j + 1, dp));
}
int lcsiter(string a, string b, int dp[][100])
{
    for (int i = a.length(); i > 0; i--)
    {
        for (int j = b.length(); j > 0; j--)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i + 1][j + 1];
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    return dp[1][1];
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() < b.length()) //a is bigger then c
        swap(a, b);
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    cout << lcsiter(a, b, dp) << endl;
    // for (int i = 1; i <= a.length(); i++)
    // {
    //     for (int j = 1; j <= b.length(); j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }
}