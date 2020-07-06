#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(string s,int i,int j,int dp[][6100]){
	if(i>j)
		return INT_MAX;
	if(i==j)
		return 0;
	if(i==j-1)
		return (s[i]==s[j])?0:1;
	if(dp[i][j]>=0)
		return dp[i][j];
	if(s[i]==s[j])
		 dp[i][j]=func(s,i+1,j-1,dp);
	else
		 dp[i][j]=min(func(s,i+1,j,dp),func(s,i,j-1,dp))+1;
	return dp[i][j];
}
int dp[6100][6100];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
		cin>>s;
		memset(dp,-1,sizeof(dp));
		cout<<func(s,0,s.length()-1,dp);
	}
	return 0;
}