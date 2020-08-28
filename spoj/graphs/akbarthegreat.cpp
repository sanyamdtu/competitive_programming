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
		int n,m;
		ll r;
		cin>>n>>r>>m;
		vector<vector<int>> g(n+1);
		for (ll i = 0; i < r; ++i)
		{
			int a,b;
			cin>>a>>b;
			g[a].pb(b);
			g[b].pb(a);
		}
		int s[m],k[m];
		for (int i = 0; i < m; ++i)
		{
			cin>>k[i]>>s[i];
		}
		int vis[n+1];
		int level[n+1];
		memset(level,0,sizeof(level));
		memset(vis,0,sizeof(vis));
		int f=1;
		for (int i = 0; i < m; ++i)
		{
			queue<int> q;
			if(vis[k[i]]!=0){
				f=0;
				break;
			}
			vis[k[i]]=i+1;
			level[k[i]]=0;
			q.push(k[i]);
			while(!q.empty()){
				int a=q.front();
				q.pop();
				if(level[a]<s[i])
				for(auto j:g[a])
				{
					if(vis[j]==0){
						vis[j]=i+1;
						q.push(j);
						level[j]=level[a]+1;
					}
					else if(vis[j]!=i+1){
						f=0;
						break;
					}
				}
			}
			if(f==0)
				break;
		}
		for (int i = 1; i < n+1; ++i)
		{
			if(vis[i]==0)
				f=0;
		}
		if(f==0)
			cout<<"No";
		else
			cout<<"Yes";
		cout<<endl;
	}
	return 0;
}