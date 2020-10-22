#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		int y=(m)/2;
		int dp[m][y+1][k];
		memset(dp,0,sizeof(dp));
		
		for (int j = 1; j < m; ++j)
		{
			int node=arr[i][j];
			dp[j][1][node%k]=node;
			for (int l = 1; l < y; ++l)
			{
				for (int p = 0; p < k; ++p)
				{
					for (int q = j-1; q >=0 ; --q)
					{
						int s=dp[q][l][p];
						dp[j][l+1][(s+arr[i][j])%k]=max(s+arr[i][j],dp[j][l+1][(s+arr[i][j])%k]);
					}

				}
			}
		}
		int curr=0;
		// cout<<curr<<endl;
		for (int l = 0; l < m; ++l)
		{
			for (int p = 0; p < y+1; ++p)
			{
				curr=max(curr,dp[l][p][0]);
			}
		}
		ans+=curr;
	}
	cout<<ans;

	return 0;
}