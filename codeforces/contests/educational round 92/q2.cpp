#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int arr[],int k,int i,int z,int n,int dp[][6]){
	if(k==0)
		return arr[i];
	if(i==n-1&&z==0)
		return arr[i];
	if(dp[i][z]>=0){
		return dp[i][z];
	}
	int a=0,b=0;
	if(z!=0&&i!=0)
		a=func(arr,k-1,i-1,z-1,n,dp)+arr[i];
	if(i!=n-1)
	 b=func(arr,k-1,i+1,z,n,dp)+arr[i];
	return dp[i][z]=max(a,b);
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k,z;
		cin>>n>>k>>z;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int dp[n][6];
		memset(dp,-1,sizeof(dp));
		cout<<func(arr,k,0,z,n,dp)<<endl;
	}
	return 0;
}