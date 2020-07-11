#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


ll func(int **arr,int n,int i,int mask,ll **dp){
	if(i==n){
		return 1;
	}
	if(dp[i][mask]!=-1)
		return dp[i][mask];
    
	int a=0,ans=0;
  
	for(int j=0;j<n;j++){
		 a= (mask&(1<<j));
		if(a==0&&arr[i][j]==1){
			ans+=func(arr,n,i+1,(mask|(1<<j)),dp);
		}
	}
	return dp[i][mask]=ans;
}




int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
		arr[i]=new int[n];
	ll **dp=new ll*[n];
	for(ll i=0;i<n;i++)
		dp[i]=new ll[(1<<n)];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<(1<<n);j++)
			dp[i][j]=-1;
	cout<<func(arr,n,0,0,dp);
	return 0;
}