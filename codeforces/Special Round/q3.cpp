#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int k;
    cin >> k;
    vector<ll> ans[2];
    int n = sqrt(k) + 1;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == n) || (i == n && j == 0) || (i == n && j == n))
                continue;
            ans[0].push_back(i + 2);
            ans[1].push_back(j + 2);
        }
    }
    int count = pow(n - 1, 2);
    cout << count << " xxx" << endl;
    for (int i = 0; i < n + 1 && count < k; i++)
    {
        count++;
        ans[0].push_back(i + 2);
        ans[1].push_back(1);
        if (i == 0)
        {
            ans[0].push_back(2);
            ans[1].push_back(2);
        }
    }
    for (int i = 0; i < n + 1 && count < k; i++)
    {
        count++;
        ans[1].push_back(i + 2);
        ans[0].push_back(1);
        if (i == n)
        {
            ans[0].push_back(2);
            ans[1].push_back(n + 1);
        }
    }

    for (int i = 0; i < n + 1 && count < k; i++)
    {
        count++;
        ans[1].push_back(i + 2);
        ans[0].push_back(n + 1);
        if (i == n)
        {
            ans[0].push_back(n + 1);
            ans[1].push_back(i + 2);
        }
    }
    for (int i = 0; i < n + 1 && count < k; i++)
    {
        count++;
        ans[0].push_back(i + 2);
        ans[1].push_back(n + 1);
        if (i == n)
        {
            ans[1].push_back(n + 1);
            ans[0].push_back(i + 2);
        }
    }
    cout << ans[0].size() << endl;
    for (int i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i] << " " << ans[1][i] << endl;
    }
}