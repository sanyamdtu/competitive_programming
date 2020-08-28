#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll dfs(ll arr[],int s,int t,vector<vector<int>> g){
	if(s==t)
		return 1;
	ll ans=0;
	for(auto i:g[s]){
		arr[j]=(arr[j]+arr[s])%mod;
		ans=(ans+dfs(arr,j,t,g))%mod;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int d;
	cin >> d;
	while (d--)
	{
		int c,b,s,t;
		cin>>c>>b>>s>>t;
		vector<vector<int>> g(c+1);
		for (int i = 0; i < b; ++i)
		{
			int x,y;
			cin>>x>>y;
			g[x].pb(y);
		}
		stack<int> stk;
		stk.push(s);
		ll arr[c+1];
		memset(arr,0,sizeof(arr));
		arr[s]=1;
		int sol=dfs(arr,s,t,g);
		cout<<arr[t]<<endl;
		
	}
	return 0;
}