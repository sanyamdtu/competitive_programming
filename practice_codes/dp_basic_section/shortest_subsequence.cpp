#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int sus(string s,string v,int sidx,int vidx){
	if(v[vidx]=='\0'&&s[sidx])
		return 0;
	int inc=func(s,v,sidx+1,vidx+1);
	int exc
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		sring s,v;
		cin>>s>>v;
		int dp[1000][1000];
		memset(dp,0,sizeof(dp));
	}
	return 0;
}