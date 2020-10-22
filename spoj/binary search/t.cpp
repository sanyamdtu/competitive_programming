#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	ll dp[n][2];
	for (ll i = 0; i < n; ++i)
	{
		dp[i][0]=dp[i][1]=1;
	}
	ll maxi[n];
	dp[0][0]=0;dp[0][1]=1;
	if(n>1){
		dp[1][0]=1;
		maxi[1]=arr[0];
		if(abs(arr[1]-arr[0])<=k){
			dp[1][1]=2;
		}
		else
			dp[1][1]=1;
	}
	for (ll i = 2; i < n; ++i)
	{

		dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
		if(dp[i][0]==dp[i-1][1])
			maxi[i]=arr[i-1];
		else
			maxi[i]=maxi[i-1];
		if(abs(maxi[i]-arr[i])<=k) {
			if(dp[i][1]<dp[i-1][0]+1)
				dp[i][1]=dp[i-1][0]+1;	
		}
			  
		if(abs(arr[i]-arr[i-1])<=k){
			dp[i][1]=max(dp[i][1],dp[i-1][1]+1);
		}
		
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<dp[i][0]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<dp[i][1]<<" ";
	}
	cout<<endl;
	cout<<"  ";
	for (int i = 1; i < n; ++i)
		cout<<maxi[i]<<" ";
	cout<<endl;
	ll ans=max(dp[n-1][1],dp[n-1][0]);
	cout<<ans;
	return 0;
}