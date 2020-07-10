#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int **arr,int n,int i,int mask,int **dp){
	if(mask==(1<<n)-1||i==n)
		return 0;
	if(dp[i][mask]!=-1)
		return dp[i][mask];
	int a=0;
	for(int j=0;j<n;j++)
		if(mask&(1<<j)==0&&arr[i][j]==1){

			a+=func(arr,n,i+1,mask|(1<<j),dp);
		}

	return dp[i][mask]=a;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
		arr[i]=new int[n];
	int **dp=new int*[n];
	for(int i=0;i<n;i++)
		dp[i]=new int[(1<<n)];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<(1<<n);j++)
			dp[i][j]=-1;
	cout<<func(arr,n,0,0,dp);
	return 0;
}