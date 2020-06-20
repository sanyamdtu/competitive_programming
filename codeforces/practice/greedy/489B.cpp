#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    int g[m];
    for (int j = 0; j < m; j++)
        cin >> g[j];
    sort(b, b + n);
    sort(g, g + m);
    int gio = 0, count = 0;
    if (n > m)
    {

        for (int i = 0; i < n && gio < m; i++)
        {
            if (abs(g[gio] - b[i]) <= 1)
            {
                gio++;
                count++;
            }
            else if (g[gio] < b[i] - 1)
                gio++;
        }
    }
    else
    {
        for (int i = 0; i < m && gio < n; i++)
        {
            if (abs(b[gio] - g[i]) <= 1)
            {
                gio++;
                count++;
            }
            else if (b[gio] < g[i] - 1)
                gio++;
        }
    }
    cout << count;
}
