/*
Hasan and Trip
Send Feedback
Hasan has finally finished his final exams and he decided to go in a trip among cities
in Syria.
There are N cities in Syria and they are numbered from 1 to N, each city has 
coordinates on plane, i-th city is in (Xi, Yi).
Hasan is in first city and he wants to visit some cities by his car in the trip but 
the final destination should be N-th city and the sequence of cities he will visit 
should be increasing in index (i.e. if he is in city i he can move to city j if and
only if i < j ).
Visiting i-th city will increase Hasan's happiness by Fi units (including first and 
last cities), also Hasan doesn't like traveling too much, so his happiness will 
decrease by total distance traveled by him.
Help Hasan by choosing a sequence of cities to visit which maximizes his happiness.
Input format:
First line contain deger N.
Next N lines contains three integers each, i-th line contains coordinates of i-th 
city Xi, Yi and Fi.
Output format:
Output one number rounded to 6 digits after floating point, the maximum possible
happiness Hasan can get. Note: If answer is 2 print 2.000000
Constraints:
1 <= N <= 3,000
0 <= Xi, Yi, Fi <= 100,000
Sample Input
3
0 0 1
3 1 1
6 0 9
Sample Output
4.675445
*/
#include <bits/stdc++.h>
using namespace std;
typedef double d;
struct city
{
    d x;
    d y;
    d f;
};
d dist(d x1, d y1, d x2, d y2)
{
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}
int main()
{

    int n;
    cin >> n;
    city arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i].x >> arr[i].y >> arr[i].f;
    d dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = arr[0].f - dist(0, 0, arr[0].x, arr[0].y);
    // for (d i = 0; i < n; i++)
    // {
    //     cout << arr[i].x << " " << arr[i].y << " " << arr[i].f << endl;
    // }
    for (int i = 1; i < n; i++)
    {
        d max_happ = INT64_MIN;
        for (int j = i - 1; j >= 0; j--)
        {
            d distance = arr[i].f + dp[j] - dist(arr[i].x, arr[i].y, arr[j].x, arr[j].y);
            max_happ = max(max_happ, distance);
        }
        dp[i] = max_happ;
    }

    d ans = INT64_MIN;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
    cout << endl;
    cout << fixed << setprecision(6) << ans << endl;
}