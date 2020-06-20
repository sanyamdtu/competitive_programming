#include <bits/stdc++.h>
using namespace std;
struct fiend
{
    int s, e;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fiend f[n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            f[i].s = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + (s[3] - '0') * 10 + (s[4] - '0');
            f[i].e = ((s[6] - '0') * 10 + (s[7] - '0')) * 60 + (s[9] - '0') * 10 + (s[10] - '0');
        }
        int in, kwoke, open;
        in = (x * 60 ++y);
    }
}