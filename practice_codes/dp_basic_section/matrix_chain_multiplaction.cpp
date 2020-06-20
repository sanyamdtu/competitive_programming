#include <bits/stdc++.h>
using namespace std;
int func(int arr[], int s, int e)
{
    if (s >= e - 1)
        return 0;
    int ans = INT_MAX;
    for (int i = s + 1; i < e - 1; i++)
        ans = min(func(arr, s, i) + func(arr, s, i) + i * arr[s] * arr[e - 1], ans);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n + 1; i++)
        cin >> arr[i];
    cout << func(arr, 0, n);
}