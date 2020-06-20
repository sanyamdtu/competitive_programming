#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        ans += (n / 2) * m;
        if (n % 2 == 1)
            ans += (m / 2) + (m % 2);
        cout << ans << endl;
    }
}