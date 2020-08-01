#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int arr[],int n,int i,int j,int dp[][4]){
	if(i==n)
		return 0;
	if(dp[i][j]>=0){
		// cout<<"pop";
		return dp[i][j];
	}
	if(arr[i]==0)
		 dp[i][j]=func(arr,n,i+1,0,dp)+1;
	else {
		int a,b,c=INT_MAX;
		a=b=c;
		if(arr[i]==1){
			if(j!=1)
				a=func(arr,n,i+1,1,dp);
		}
		else if(arr[i]==2){
			if(j!=2)
				a=func(arr,n,i+1,2,dp);
		}
		else{
			if(j!=1)
				a=func(arr,n,i+1,1,dp);
			if(j!=2)
				b=func(arr,n,i+1,2,dp);
		}
		c=func(arr,n,i+1,0,dp)+1;
		dp[i][j]=min(a,min(b,c));
	}
	return dp[i][j];
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
	int dp[101][4];
	for (int i = 0; i < 101; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			dp[i][j]=-1;
		}
	}
	
	cout<<func(arr,n,0,0,dp);
    return 0;
}
