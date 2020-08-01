#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000009
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	ll dp[1000001];
	dp[0]=1;
	dp[1]=0;
	dp[4]=1;
	dp[2]=dp[3]=1;
	for (int i = 0; i <1000001; ++i)
	{
		dp[i]=0;
	}
		
	for (int i = 5; i <1000001; ++i)
	{
		dp[i]=(dp[i-2]+dp[i-3])%mod;
	}
	while (t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
} 