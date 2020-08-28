#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int n,m;
pair<int,int> x;
char arr[101][101];
map<pair<int,int>,list<pair<int,int>>> g;
bool dfs(map<pair<int,int>,bool> vis,pair<int,int> src,int k){
	if(src==x)
		return (k<=0);
	if(vis[src])
		return false;
	vis[src]=true;
	bool ans=false;
	for (auto j:g[src])
	{
		ans=ans|dfs(vis,j,k-1);
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k;
	cin>>n>>m>>k;
	cin>>x.first>>x.second;
	char arr[n+1][m+1];
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=m ; ++j)
		{
			cin>>arr[i][j];
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=m ; ++j)
		{
			int X[]={1,0,-1,0},Y[]={0,-1,0,1};
			for (int k = 0; k < 4; ++k)
			{
				int a,b;
				a=i+X[k];
				b=j+Y[k];
				if(a>0&&b>0&&a<=n&&b<=m&&arr[a][b]=='.'){
					g[{i,j}].pb({a,b});
				}
			}
		}
	}
	map<pair<int,int>,bool> vis;
	if(dfs(vis,x,k))
		cout<<"YES";
	else
		cout<<"NO";
	cout<<endl;
	return 0;
}