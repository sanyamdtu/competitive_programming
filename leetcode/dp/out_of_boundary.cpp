#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int x,int y,int n,int m,int dp[][60][60],int k){
	if(x>=n||y>=m||x<0||y<0)
		return 1;
	if(k==0)
		return 0;
	if(dp[x][y][k]!=-1)
		return dp[x][y][k];
	return dp[x][y][k]=func(x+1,y,n,m,dp,k-1)+func(x-1,y,n,m,dp,k-1)+func(x,1+y,n,m,dp,k-1)+func(x,y-1,n,m,dp,k-1);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	int x,y;
	cin>>x>>y;

	return 0;
}