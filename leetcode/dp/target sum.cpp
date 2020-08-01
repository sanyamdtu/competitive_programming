#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int arr[],int i,int sum,int n,int dp[][1001],int s){
	if(i==n){
		if(s==sum)
			return 1;
		return 0;
	}
	if(dp[i][sum]!=-1)
		return dp[i][sum];
	return dp[i][s]=func(arr,i+1,sum-arr[i],n)+func(arr,i+1,sum,n);
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	int arr[n],sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	int dp[20][1001];
	cout<<
	return 0;
}