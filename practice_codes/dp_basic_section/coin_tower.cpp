#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
     int dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[1]=1;
    dp[x]=1;
    dp[y]=1;
    for (int i = 2; i < n+1; i++)
    {
        int a=-1,b=-1,c=-1;
        a = dp[i-1];
        if (i - x >= 1)
          b= dp[i-x];
        if (i - y >= 1)
           c=dp[i-y];
        if(a==0||b==0||c==0)
            dp[i]=1;
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
         cout<<dp[i]<<" ";
    cout<<endl;
    if (dp[n] == 1)
        cout<<"Beerus";
    else
        cout<<"Whis";
    return 0;
}