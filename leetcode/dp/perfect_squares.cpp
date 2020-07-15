#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int d=sqrt(n+1);
	int dp[n+1];
    memset(dp,10000,sizeof(dp));
    dp[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=d; ++j)
		{
			if((i-j*j)>=0)
			 dp[i]=min(dp[i-j*j]+1,dp[i]);
		}
	}
	cout<<dp[n];
	return 0;
}