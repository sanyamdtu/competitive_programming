#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>arr[i][j];
		}
	}
	int dp[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			dp[i][j]=INT_MAX;
		}
	}
	dp[m-1][n-1]=(arr[m-1][n-1]>=0)?1:abs(arr[m-1][n-1])+1;
	for (int i = m-1; i >=0; --i)
	{
		for (int j = n-1; j>=0; --j)
		{
				if(i!=m-1){
					dp[i][j]=(dp[i+1][j]-arr[i][j]<=0)?1:dp[i+1][j]-arr[i][j];
					// cout<<dp[i][j]<<" ";
				}
				if(j!=n-1){
					int a=(dp[i][j+1]-arr[i][j]<=0)?1:dp[i][j+1]-arr[i][j];
					dp[i][j]=min(dp[i][j],a);	
					 // cout<<a<<" ";
			    }				
			
		}
				
	}
	// for (int i = 0; i < m; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	cout<<dp[0][0];
	return 0;
}