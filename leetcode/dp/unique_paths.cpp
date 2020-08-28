#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int i,int j,int dp[][200]){
	if(i==n&&j==m)
		return 1;
	if(i>=n||j>=m||arr[i][j]==1)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	return dp[i][j]=func(i+1,j)+func(i,j+1);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	int arr[n][m],dp[n][200];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
			dp[i][j]=-1;
		}
	}
	return 0;
}