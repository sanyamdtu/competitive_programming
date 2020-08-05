#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,t;
	cin>>n>>t;
	int arr[n];
	vector<vector<int> > g(n);
	for (int i = 1; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n; ++i)
		g[i].pb(arr[i]+i);
	queue<int> q;
	q.push(1);
	int vis[n];
	int f=1;
	memset(vis,0,sizeof(vis));
	vis[1]=1;
	// cout<<"pop";
	while(!q.empty()){
		int a=q.front();
		if(a==t){
			f=0;
			break;
		}
		q.pop();
		for(int i=0;i<g[a].size();i++){
			if(vis[g[a][i]]==0){
				vis[g[a][i]]=1;
				q.push(g[a][i]);
			}
		}
	}
	if(f==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}