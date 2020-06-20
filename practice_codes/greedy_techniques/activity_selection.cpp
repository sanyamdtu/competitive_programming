/*
Activity Selection
Send Feedback
You are given n activities with their start and finish times. Select the maximum 
number of activities that can be performed by a single person, assuming that a
person can only work on a single activity at a time.
Input
The first line of input contains one integer denoting N.
Next N lines contains two space separated integers denoting the start time and finish
time for the ith activity.

Output
Output one integer, the maximum number of activities that can be performed
Constraints
1 ≤ N ≤ 10^6
1 ≤ ai, di ≤ 10^9
Sample Input
6
1 2
3 4
0 6
5 7
8 9
5 9
Sample Output
4
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct activity
{
    ll s, e;

} act[1000000];
bool comp(activity a, activity b)
{
    return a.e < b.e;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> act[i].s >> act[i].e;
    }
    sort(act, act + n, comp);
    int count = 0, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time < act[i].s)
        {
            count++;
            time = act[i].e;
        }
    }
    cout << count;
}