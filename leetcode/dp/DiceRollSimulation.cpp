#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
//l is the number p is the number of time it came

int func(int d,vector<int> v,int l,int p,int dp[][6][16]){
	if(d==0)
		return 1;
	int a=0;
	if(dp[d][l][p]!=-1)
		return dp[d][l][p];
	for(int  i=0;i<v.size();i++){
		if(i!=l){
		    a+=func(d-1,v,i,1,dp);
		}
		else if(p!=v[i]){
			a+=func(d-1,v,i,p+1,dp);
		}
	}
	return a;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	int dp[5001][6][16];
	memset(dp,-1,sizeof(dp));
    return func(d,v,l,p,dp);
}