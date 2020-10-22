#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int n,int dp[21]){
	if(n<=1)
		return 1;
	if(dp[n]!=-1)
		return dp[n];
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		 ans+=func(n-i-1)*func(i);
	}
	return dp[n]=ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int dp[21];
	memset(dp)
	cout<<func(n);
	return 0;
}