#include<bits/stdc++.h>
using namespace std;
int par[200000],vis[200000];
int f=-1;
void dfs(int src,vector<vector<int>> &g){
	vis[src]=1;	
	for(auto i:g[src]){
		if(par[src]==i)
			continue;
		if(vis[i]==1){
			f=i;
		}
		else{
			par[i]=src;
			dfs(i,g);
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> g(n+1);
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	memset(vis,0,sizeof(vis));
	for (int i = 1; i <= n; ++i)
	{
		if(vis[i]==0){
			par[i]=i;
			dfs(i,g);
		}
	}
	if(f==-1){
		cout<<"IMPOSSIBLE";
	}
	else{
		vector<int> v;
		while(par[f]!=f){
			v.push_back(f);
			f=par[f];
		}
		v.push_back(f);
		cout<<v.size()<<endl;
		reverse(v.begin(), v.end());
		for (int i = 0; i < v.size(); ++i)
		{
			cout<<v[i]<<" ";
		}
		cout<<v[0]<<endl;
	}
	
}