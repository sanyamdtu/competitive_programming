#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
		cin>>n>>m;
		vector<vector<int>> g(n+1);
		for (int i = 0; i < m; ++i)
		{
			int a,b;
			cin>>a>>b;
			g[a].pb(b);
		}
		int vis[n+1];
		int ans=0;
		for (int i = 1; i <= n; ++i)
		{
			int c=0;
			memset(vis,0,sizeof(vis));
			queue<int> q;
			q.push(i);
			vis[i]=1;
			while(!q.empty()){
				c++;
				int a=q.front();
				q.pop();
				for(auto j:g[a]){
					if(vis[j]==0)
					{
						q.push(j);
						vis[j]=1;
					}
				}
			}
			ans=max(ans,c);
		}		
		cout<<ans;
	
	return 0;
}