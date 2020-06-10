/*
Star Sky
Send Feedback
The Cartesian coordinate system is set in the sky. There you can see n stars, the 
i-th has coordinates (xi, yi), a maximum brightness c, equal for all stars, and an 
initial brightness si (0 ≤ si ≤ c).
Over time the stars twinkle. At moment 0 the i-th star has brightness si. Let at 
moment t some star has brightness x. Then at moment (t + 1) this star will have 
brightness x + 1, if x + 1 ≤ c, and 0, otherwise.
You want to look at the sky q times. In the i-th time you will look at the moment ti 
and you will see a rectangle with sides parallel to the coordinate axes, the lower 
left corner has coordinates (x1i, y1i) and the upper right — (x2i, y2i). For each 
view, you want to know the total brightness of the stars lying in the viewed rectangle.
A star lies in a rectangle if it lies on its border or lies strictly inside it.
Input
The first line contains three integers n, q, c (1 ≤ n, q ≤ 10^5, 1 ≤ c ≤ 10) — the 
number of the stars, the number of the views and the maximum brightness of the stars.

The next n lines contain the stars description. The i-th from these lines contains 
three integers xi, yi, si (1 ≤ xi, yi ≤ 100, 0 ≤ si ≤ c ≤ 10) — the coordinates of 
i-th star and its initial brightness.

The next q lines contain the views description. The i-th from these lines contains 
five integers ti, x1i, y1i, x2i, y2i (0 ≤ ti ≤ 10^9, 1 ≤ x1i < x2i ≤ 100, 
1 ≤ y1i < y2i ≤ 100) — the moment of the i-th view and the coordinates of the viewed 
rectangle.
Output
For each view print the total brightness of the viewed stars.
Sample Input
2 3 3
1 1 1
3 2 0
2 1 1 2 2
0 2 1 4 5
5 1 1 5 5
Sample Output
3
0
3
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, cmax;
    cin >> n >> q >> cmax;
    int dp[101][101][cmax + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        dp[x][y][c]++;
    }

    for (int k = 0; k <= cmax; k++)
        for (int i = 0; i < 101; i++)
            for (int j = 1; j < 101; j++)
                dp[i][j][k] += dp[i][j - 1][k];
    for (int k = 0; k <= cmax; k++)
        for (int i = 0; i < 101; i++)
            for (int j = 1; j < 101; j++)
                dp[j][i][k] += dp[j - 1][i][k];
    while (q--)
    {
        long long x1, y1, x2, y2, t;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int brightness = 0;
        for (int i = 0; i <= cmax; i++)
            brightness += (dp[x2][y2][i] + dp[x1 - 1][y1 - 1][i] - dp[x1 - 1][y2][i] - dp[x2][y1 - 1][i]) * ((i + t) % (cmax + 1));
        cout << brightness << endl;
    }
}