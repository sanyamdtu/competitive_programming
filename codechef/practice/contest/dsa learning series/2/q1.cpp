#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll dp[n];
		// memset(dp,1,sizeof(dp));
		for (int i = 0; i < n; ++i)
		{
			dp[i]=1;
		}
		for (int i = 1; i < n; ++i)
		{
			if(arr[i]>=arr[i-1])
				dp[i]+=dp[i-1];
		}
		ll sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum+=dp[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}