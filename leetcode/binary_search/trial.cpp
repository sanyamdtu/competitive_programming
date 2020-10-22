#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin>>n>>k;
	int l[k],r[k];
	vector<int> v;
	for (int i = 0; i < k; ++i)
	{
		cin>>l[i]>>r[i];
		for (int j = l[i]; j <= r[i]; ++j)
		{
			v.pb(j);
		}
	}
	int dp[n+1];
	for (int i = 0; i < n+1; ++i)
	{
		dp[i]=0;
	}
	sort(v.begin(), v.end());
	dp[0]=1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < v.size(); ++j)
		{
			if(i-v[j]>=0)
				dp[i]=(dp[i-v[j]]+dp[i])%mod;
		}
	}
	cout<<dp[n-1];
	return 0;
}