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
	char s[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>s[i][j];
		}
	}
	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i][j]=s[i][j]-'0' ;
		}
	}
	int dp[n][n];
	memset(dp,0,sizeof(dp));
	dp[0][0]=arr[0][0];
	int maxi=INT_MIN;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
			{
				if(arr[i][j]==1)
				 dp[i][j]=(min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1);
				maxi=max(dp[i][j],maxi);
			}		
	}
	cout<<maxi*maxi;
	return 0;
}