#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int p[],int s ,int e,int pf[],int dp[][102]){
	if(dp[s][e]>=0){
		return dp[s][e];
	}
	if(s==e){
		dp[s][e]=0;
		return 0;
	}

	int ans=INT_MAX;
	for(int i=s;i<e;i++){
		int sfx=pf[i+1]-pf[s];
		int lfx=pf[e+1]-pf[i+1];
		ans=min(ans,func(p,s,i,pf,dp)+func(p,i+1,e,pf,dp)+sfx*lfx);
	}
	dp[s][e]=ans;
	return ans;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int p[n],pfix[n+1];
	memset(pfix,0,sizeof(pfix));
	
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	int dp[n+1][102];
	memset(dp,-1,sizeof(dp));
	cout<<func(p,0,n-1,pfix,dp);
	
	return 0;
}

