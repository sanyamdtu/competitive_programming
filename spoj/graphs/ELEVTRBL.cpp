#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		int f,s,e,u,d;
		cin>>f>>s>>e>>u>>d;
		vector<vector<int>> g(f+1);
		for (int i = 1; i <=f; ++i)
		{
			if(i+u<=f)
				g[i].pb(i+u);
			if(i-d>=1)
				g[i].pb(i-d);
		}
		int vis[f+1],level[f+1];
		memset(vis,0,sizeof(vis));
		memset(level,0,sizeof(level));
		queue<int> q;
		q.push(s);
		vis[s]=1;
		level[s]=0;
		int ans=INT_MAX;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			if(a==e){
				ans=level[a];
				break;
			}
			for(auto i:g[a]){
				if(vis[i]==0){
					level[i]=level[a]+1;
					vis[i]=1;
					q.push(i);
				}
			}
		}
		if(ans==INT_MAX)
			cout<<"use the stairs";
		else
			cout<<ans;
		cout<<endl;
	return 0;
}