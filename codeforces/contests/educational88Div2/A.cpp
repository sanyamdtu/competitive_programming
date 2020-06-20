#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn for (int i = 0; i < n; i++)
#define pb(x) push_back(x)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int q = n / k;
        if (m <= q || m == 0 && k == 1)
            cout << m << endl;
        else
        {
            int rem = m - q;
            int p = rem / (k - 1);
            if (rem % (k - 1) > 0)
                p++;
            cout << q - p << endl;
        }
    }
}