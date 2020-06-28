#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	int dp[n][m];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++)
		if(arr[0][i]==0)
		dp[0][i]=1;
	for(int i=0;i<n;i++)
		if(arr[i][0]==0)
		dp[i][0]=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(arr[i][j]==0)
				dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
		}
	}
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; ++j)
			ans=max(ans,dp[i][j]);
	cout<<ans;
	return 0;
}