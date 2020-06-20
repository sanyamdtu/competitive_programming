#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb(x) push_back(x)

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll cost = 0;
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        if (2 * x < y)
            y = 2 * x;
        char s[100][1000];
        forn(i, n)
                forn(j, m)
                    cin >>
            s[i][j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j != m - 1 && s[i][j] == '.' && s[i][j + 1] == '.')
                {
                    cost += y;
                    j++;
                }

                else if (s[i][j] == '.')
                    cost += x;
            }
        }
        cout << cost << endl;
    }
}