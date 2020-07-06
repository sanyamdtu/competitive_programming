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
		int n,w;
		cin>>n>>w;
		int arr[n][w];
		for(int i=0;i<n;i++)
			for(int j=0;j<w;j++)
				cin>>arr[i][j];
		int dp[n+2][w+2];
		memset(dp,INT_MIN,sizeof(dp));
		for(int i=1;i<w+1;i++)
			dp[0][i]=arr[0][i-1];
		for(int i=1;i<n;i++)
			for(int j=1;j<=w;j++)
				dp[i][j]=max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]))+arr[i][j-1];
		int ans=INT_MIN;
		// for(int i=0;i<n;i++){
		// 	for(int j=1;j<=w;j++)
		// 		cout<<dp[i][j]<<" ";
		// 	cout<<endl;
		// }
		for(int i=0;i<w+2;i++)
			ans=max(ans,dp[n-1][i]);
		cout<<ans<<endl;
	}
	return 0;
}