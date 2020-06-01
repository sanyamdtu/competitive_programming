/*
Edit Distance - Problem
Send Feedback
Given two strings s and t of lengths m and n respectively, find the Edit Distance 
between the strings. Edit Distance of two strings is minimum number of steps required 
to make one string equal to other. In order to do so you can perform following three
operations only :
1. Delete a character

2. Replace a character with another one

3. Insert a character
Note - Strings don't contain spaces
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
Line 1 : Edit Distance value
Constraints
1<= m,n <= 20
Sample Input 1 :
abc
dc
Sample Output 1 :
2
*/
#include <bits/stdc++.h>
using namespace std;
int minops(string a, string b, int i, int j, int dp[][100])
{
    if (a[i] == '\0')
        return b.length() - j;
    if (b[j] == '\0')
        return a.length() - i;
    ///base case
    if (dp[i][j] != -1)
        return dp[i][j];
    //recursive case
    int nothing = INT_MAX, del = INT_MAX, add = INT_MAX;
    del = 1 + minops(a, b, i + 1, j, dp);
    add = 1 + minops(a, b, i, j + 1, dp);
    nothing = minops(a, b, i + 1, j + 1, dp);
    if (a[i] != b[j])
        nothing++; //replaced
    dp[i][j] = min(del, min(nothing, add));
    return dp[i][j];
}
int edit_iter(string a, string b, int dp[][100])
{
    for (int i = 1; a[i + 1] != '\0'; i++)
    {
        for (int j = 1; b[j + 1] != '\0'; j++)
        {
            int no = INT_MAX, add, del;
            del = add = no;
            no = dp[i - 1][j - 1];
            del = dp[i - 1][j];
            add = dp[i][j - 1];
            if (a[i - 1] != b[j - 1])
                no++;
            dp[i][j] = min(no, min(add, del))
        }
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() < b.length())
        swap(a, b);
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    cout << edit_iter(a, b, dp);
}
