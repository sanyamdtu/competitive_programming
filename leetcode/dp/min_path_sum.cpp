#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int arr[][100],int i,int j,int dp[][100],int n){
	if(i==n)
		return 0;
	if(dp[i][j]!=INT_MAX)
		return dp[i][j];
	int a=func(arr,i+1,j,dp,n);
	if(j!=0)
		a=min(func(arr,i+1,j-1,dp,n),a);
	if(j!=n-1)
		a=min(func(arr,i+1,j+1,dp,n),a);
	return dp[i][j]=a+arr[i][j];
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int arr[n][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>arr[i][j];
		}
	}
	int ans=INT_MAX;
	int dp[n][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			dp[i][j]=INT_MAX;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		ans=min(ans,func(arr,0,i,dp,n));
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	cout<<ans;
	return 0;
}