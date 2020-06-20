/*
Weighted Job Scheduling
Send Feedback
You are given N jobs where every job is represented as:
1.Start Time
2.Finish Time
3.Profit Associated
Find the maximum profit subset of jobs such that no two jobs in the subset overlap.
Input
The first line of input contains one integer denoting N.
Next N lines contains three space separated integers denoting the start time, finish
time and the profit associated with the ith job. 
Output
Output one integer, the maximum profit that can be achieved.
Constraints
1 ≤ N ≤ 10^6
1 ≤ ai, di, p ≤ 10^6
Sample Input
4
3 10 20
1 2 50
6 19 100
2 100 200
Sample Output
250
*/
#include <bits/stdc++.h>
using namespace std;
struct job
{
    int s, f, p;
};
bool comp(job a, job b) { return a.f < b.f; }
bool comp2(job a, job b) { return a.s < b.s; }
int bsesarch(job s[], int ele, int last)
{
    int beg = 0, mid;
    while (beg <= last)
    {
        mid = (beg + last) / 2;
        if (s[mid].f == ele)
            return mid;
        else if (s[mid].f < ele)
            last = mid - 1;
        else
            beg = mid + 1;
    }
    if(mid)
}
int main()
{
    int n;
    cin >> n;
    job jarr[n];
    for (int i = 0; i < n; i++)
        cin >> jarr[i].s >> jarr[i].f >> jarr[i].p;
    sort(jarr, jarr + n, comp);
    int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = jarr[0].p;
    for (int i = 1; i < n; i++)
    {
        int maxi = jarr[i].p;
        int j = bsesarch(jarr, jarr[i].s, i - 1);
        maxi = max(dp[j] + jarr[i].p, maxi);
        dp[i] = max(maxi, dp[i - 1]);
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        ans = max(dp[i], ans);
    cout << ans;
}