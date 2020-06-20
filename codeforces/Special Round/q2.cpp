#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k;
    cin >> k;
    string s("codeforces");
    string a;
    a = "";
    ll min_f = pow(k, 0.1);

    ll ans = pow(min_f, 10), c = 0;
    while (ans < k)
    {
        ans = pow(min_f, 10 - c) * (pow(min_f + 1, c));
        c++;
    }
    int flag = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        c--;
        if (c <= 0)
            flag = 0;
        for (int j = 0; j < min_f + flag; j++)
            a += s[i];
    }
    cout << a;
}