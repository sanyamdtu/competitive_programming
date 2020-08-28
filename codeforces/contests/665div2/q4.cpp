#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int n;
int ans[100008];
int k;
int dfs(vector<vector<int>> g,int vis[],int src,int arr[]){
	vis[src]=1;
	int s=1;
	for(auto i:g[src]){
		if(vis[i]==0){
			int a=dfs(g,vis,i,arr);
			arr[k]=a*(n-a);
			k++;
			s+=a;
		}
	}
	return s;
}
bool comp(int a ,int b){
	return (a>b);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		k=0;
		int m;
		cin>>n;
		int arr[n-1];
		vector<vector<int>> g(n+1);
		for (int i = 0; i < n-1; ++i)
		{
			int u,v;
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		cin>>m;
		int p[m];
		for (int i = 0; i < m; ++i)
		{
			cin>>p[i];
		}
		sort(p,p+m,comp);
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		int a=dfs(g,vis,1,arr);
		sort(arr,arr+n-1,comp);
		ll res=0;
		if(n-1>=m){
			for (int i = 0,j=0; i < n-1; ++i,j++)
			{
				if(j>=m)
					res=(res+arr[i])%mod;
				else{
					res=(res+arr[i]*p[j])%mod;
				}
			}
		}
		else{
			int j=m-1,i=n-2;
			while(i>0)
			{
				res=(res+arr[i]*p[j])%mod;
				i--;
				j--;
			}
			ll temp=p[j];
			j--;
			for (; j>=0 ;j--)
			{
				temp=(temp*p[j])%mod;
			}
			ll te=(arr[0]*temp)%mod;
			res=(res+te)%mod;
		}
		cout<<res<<"\n";
		
	}
	return 0;
}