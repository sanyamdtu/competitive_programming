/*
Roy and Coin Boxes
Send Feedback
Roy has N coin boxes numbered from 1 to N.
Every day he selects two indices [L,R] and adds 1 coin to each coin box starting 
from L to R (both inclusive).
He does this for M number of days.

After M days, Roy has a query: How many coin boxes have atleast X coins.
He has Q such queries.
Input
First line contains N - number of coin boxes.
Second line contains M - number of days. Each of the next M lines consists of two 
space separated integers L and R. Followed by integer Q - number of queries.
Each of next Q lines contain a single integer X.

Output
For each query output the result in a new line.
Constraints
1 ≤ N ≤ 1000000

1 ≤ M ≤ 1000000

1 ≤ L ≤ R ≤ N

1 ≤ Q ≤ 1000000

1 ≤ X ≤ N
Sample Input
7
4
1 3
2 5
1 2
5 6
4
1
7
4
2
Sample Output
6
0
0
4
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int s[n + 1], e[n + 1];
    memset(s, 0, sizeof(s));
    memset(e, 0, sizeof(e));
    for (int k = 0; k < m; k++)
    {
        int l, r;
        cin >> l >> r;
        s[l]++;
        e[r]++;
    }
    int arr[n + 1], ans[n + 1];
    memset(arr, 0, sizeof(arr));
    memset(ans, 0, sizeof(ans));
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + s[i] - e[i - 1];
        cout << arr[i] << " ";
        ans[arr[i]]++;
    }
    for (int i = n - 1; i > 0; i--)
        ans[i] += ans[i + 1];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << ans[x] << endl;
    }
}