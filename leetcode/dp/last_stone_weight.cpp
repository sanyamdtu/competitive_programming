#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int n,int arr[],int s,int e,int dp[][30]){
	if(s==e)
		return arr[s];
	if(s==e-1){
		return abs(arr[e]-arr[s]);
	}
	if(dp[s][e]>=0)
		return dp[s][e];
	int ans=INT_MAX;
	for (int i = s+1; i <e; ++i)
	{
		int x=func(n,arr,s,i,dp);
		int y=func(n,arr,i+1,e,dp);
		ans=min(ans,abs(x-y));
	}
	dp[s][e]=ans;
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int arr[n];
	int dp[30][30];
	memset(dp,-1,sizeof(dp));
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<func(n,arr,0,n-1,dp)<<endl;
	// for (int i = 0; i < n; ++i)
	// 	for (int j = 0; j < n; ++j)
	// 		cout<<dp[i][j]<<" ";
	return 0;
}