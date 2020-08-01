#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool func(int arr[],int i,int n,int sum,int s,int dp[][20001]){
	if(i==n){
		if(sum/2==s)
			return true;
		return false;
	}
	if(dp[i][s]!=-1)
	 return dp[i][s];
	return dp[i][s]=func(arr,i+1,n,sum,s+arr[i],dp)||func(arr,i+1,n,sum,s,dp);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int arr[n],sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	int dp[201][20001];
	return func(arr,0,n,sum,0,dp);
	return 0;
}