#include <bits/stdc++.h>
using namespace std;
struct node
{
    long long a, b, w;
};
bool comp(node a, node b)
{
    return a.w < b.w;
}
long long find(long long x, long long p[])
{
    if (x == p[x])
        return x;
    return p[x] = find(p[x], p);
}
void un(long long x, long long y, long long p[], long long r[])
{
    long long px = find(x, p);
    long long py = find(y, p);
    if (px != py)
    {
        if (r[px] > r[py])
            p[py] = px;
        else if (r[px] < r[py])
            p[px] = py;
        else
        {
            p[px] = py;
            r[py]++;
        }
    }
}
int main()
{
    long long n, m;
    cin >> n >> m;
    node arr[m];
    for (long long i = 0; i < m; i++)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].w;
    }
    sort(arr, arr + m, comp);
    long long p[n + 1], r[n + 1];
    for (long long i = 0; i < n + 1; i++)
    {
        p[i] = i;
        r[i] = 1;
    }
    long long c = 0, ans = 0;
    for (long long i = 0; i < m; i++)
    {
        long long pa = find(arr[i].a, p);
        long long pb = find(arr[i].b, p);
        if (pa != pb)
        {
            un(arr[i].a, arr[i].b, p, r);
        }
        else{
            if(arr[i].w>0){
                ans+= arr[i].w;
            }
        }
    }
    cout << ans;
}