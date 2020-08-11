#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		
		string s;
		cin>>s;
		int n=s.length();
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			arr[i]=s[i]-'0';
		}
		int dp[n+1],help[10];
		dp[n]=INT_MAX;
		for (int i = 0; i < 10; ++i)
		{
			help[i]=INT_MAX;
		}
		dp[0]=0;
		help[arr[0]]=0;
		for (int i = 1; i < n; ++i)
		{
			dp[i]=min(dp[i-1],help[arr[i]])+1;
			help[arr[i]]=min(dp[i],help[arr[i]]);
		}
		for (int i = 1; i < n; ++i){
			dp[i]=min(min(dp[i+1],help[arr[i]])+1,dp[i]);
			help[arr[i]]=min(min(dp[i],help[arr[i]]),help[arr[i]]);
		}  
		for (int i = 0; i < n; ++i)
		{
			cout<<dp[i]<<" ";
		}
		// cout<<dp[n-1]<<endl;
	
	return 0;
}