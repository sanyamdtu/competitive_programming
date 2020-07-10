#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int p[],int s,int e,int n,int dp[][100]){
	if(s>=e-1)
		return 0;
	if(dp[s][e]>=0)
		return dp[s][e];
	int ans=INT_MAX;
	for(int i=s+1;i<e;i++)
		ans=min(func(p,s,i,n,dp)+func(p,i,e,n,dp)+p[s]*p[i]*p[e],ans);
	dp[s][e]=ans;
	return ans;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int p[n+1];
	for(int i=0;i<n+1;i++)
		cin>>p[i];
	int dp[n+1][100];
	memset(dp,-1,sizeof(dp));
	cout<<func(p,0,n,n,dp);
	return 0;
}