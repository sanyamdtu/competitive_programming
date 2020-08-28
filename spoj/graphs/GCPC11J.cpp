#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		vector<vector<int>> g(n);
		for (int i = 0; i < n-1; ++i)
		{
			int a,b;
			cin>>a>>b;
			g[a].pb(b);
			g[b].pb(a);
		}
		int level[n];
		int vis[n];
		memset(vis,0,sizeof(vis));
		queue<int> q;
		q.push(0);
		level[0]=0;
		vis[0]=1;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			for(auto i:g[a]){
				if(vis[i]==0){
					level[i]=level[a]+1;
					vis[i]=1;
					q.push(i);
				}
			}
		}
		int maxi=0;
		for (int i = 1; i < n; ++i)
		{
			if(level[maxi]<level[i])
				maxi=i;
		}
		memset(vis,0,sizeof(vis));
		q.push(maxi);
		vis[maxi]=1;
		level[maxi]=0;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			for(auto i:g[a]){
				if(vis[i]==0){
					level[i]=level[a]+1;
					vis[i]=1;
					q.push(i);
				}
			}
		}
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
				ans=max(ans,level[i]);
		}
		cout<<(ans+1)/2<<endl;
	}
	return 0;
}