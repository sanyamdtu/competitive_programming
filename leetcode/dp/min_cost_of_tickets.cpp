#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int arr[],int cost[],int i,int n,int j,int dp[][1000]){
	if(i==n)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	int ans=INT_MAX;
	if(j>=arr[i])
		ans=func(arr,cost,i+1,n,j,dp);
	else{
		ans=func(arr,cost,i+1,n,arr[i],dp)+cost[0];
		ans=min(ans,func(arr,cost,i+1,n,arr[i]+6,dp)+cost[1]);
		ans=min(ans,func(arr,cost,i+1,n,arr[i]+29,dp)+cost[2]);
	}
	return dp[i][j]=ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int cost[3];
	for (int i = 0; i < 3; ++i)
	{
		cin>>cost[i];
	}
	int dp[365][1000];
	memset(dp,-1,sizeof(dp));
	cout<<func(arr,cost,0,n,0,dp);
	return 0;
}