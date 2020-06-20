#include <bits/stdc++.h>
using namespace std;
typedef double d;
typedef long long ll;
int main()
{
    int n;
    ll l;
    cin >> n >> l;
    ll lamps[n];
    for (int i = 0; i < n; i++)
        cin >> lamps[i];
    sort(lamps, lamps + n);
    ll arr_diff[n + 1];
    arr_diff[0] = 2 * (lamps[0] - 0);
    arr_diff[n] = 2 * (l - lamps[n - 1]);
    for (int i = 1; i < n; i++)
        arr_diff[i] = lamps[i] - lamps[i - 1];
    sort(arr_diff, arr_diff + n + 1);
    cout << fixed << setprecision(9) << double(double(arr_diff[n]) / double(2));
}