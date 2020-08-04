#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int minv(int w[],int vis[],int n){
	int minv=0;
	for (int i = 1; i < n; ++i)
	{
		if(vis[i]==0&&(w[i]<w[minv]))
			minv=i;
	}
	return minv;

}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,e;
	cin>>n;
	vector<vector<pair<int,int>>>   graph(e);
	for (int i = 0; i < e; ++i)
	{
		int x,y,w;
		cin>>x>>y>>w;
		graph[x].push_back({y,w});
	}
	int w[n],par[n],vis[n];
	memset(par,-1,sizeof(par));
	memset(vis,0,sizeof(vis));
	for (int i = 0; i < n; ++i)
	{
		w[i]=INT_MAX;
	}
	w[0]=0;
	for (int i = 0; i < n; ++i)
	{
		int min=minv(w,vis,n);
		vis[min]=1;
		for(auto j:graph[min]){
			if(vis[j.first]==0&&w[j.first]>j.second){
				w[j.first]=j.second;
				par[j.first]=min
			}
		}
	}
	for (int i = 1; i < n; ++i)
	{
		if(par[i]<i){
			cout<<par[i]<<" "<<i<<" "<<w[i]<<endl;

		}
		else
			cout<<i<<" "<<par[i]<<" "<<w[i]<<endl;
	}
	return 0;
}