#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int d ,int f,int t,int dp[][1000]){
	 if(d==0){
	    if(t==0)
	 	return 1;
	    else return 0;
	 }
	 if (dp[d][t]!=-1)
	 {
	 	return dp[d][t];
	 }
	 int a=0;
	for (int i = 1; i <= f; ++i)
	{
		a+=func(d-1,f,t-i);
	}
	return a;

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int d,f,t;
	cin>>d>>f>>t;
	int dp[d][t];
	memset(dp,-1,sizeof(dp));
	cout<<func(d,f,t);
	return 0;
}