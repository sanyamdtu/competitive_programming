#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
string temp;
int vis[1000004];
int func(int src,vector<vector<int>> g(n+1),int f,int self,int vis[]){
	vis[src]=1;
	for(auto i:g[src]){
		if(vis[i]==0){
			
		}
	}
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
		vector<vector<int>> g(n+1);
		for (int i = 0; i < n-1; ++i)
		{
			int a,b;
			cin>>a>>b;
			g[a].pb(b);
			g[b].pb(a);
		}
		memset(vis,0,sizeof(vis));
		cin>>temp;
		int a=0,b=0;

	}
	return 0;
}