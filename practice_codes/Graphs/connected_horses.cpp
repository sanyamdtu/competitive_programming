#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll factorial(int n) 
{ 
    return (n == 1 || n == 0) ? 1 : (n * factorial(n - 1))%mod; 
} 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
	int t;
	cin >> t;
	while (t--)
	{
		int n,m,q;
		cin>>n>>m>>q;
		map<pair<int,int>,list<pair<int,int>>> g;
		int arr[n+1][m+1];
		memset(arr,0,sizeof(arr));
		for (int i = 0; i < q; ++i)
		{
			int x,y;
			cin>>x>>y;
			arr[x][y]=1; 
		}

		// for (int i = 1; i <= n; ++i)
		// {
		// 	for (int j = 1; j <= m; ++j)
		// 	{
		// 		cout<<arr[i][j]<<" ";
		// 	}
		// 	cout<<endl; 
		// }
		for(int i=1;i<=n;i++){
			for (int j = 1; j <=m; ++j)
			{
				if(arr[i][j]==1){
					for (int l = 0; l < 8; ++l)
					{
						int a=j+X[l];
						int b=i+Y[l];
						if(a>=1&&a<=m&&b>=1&&b<=n){
							if(arr[b][a]==1){
								g[{i,j}].pb({b,a});
							}
						}
					}
				}
			}
		}
		map<pair<int,int>,bool> vis;
		vector<vector<pair<int,int>>> con;
		for(auto i:g){
			if(!vis[{i.first}]){
				vector<pair<int,int>> p;
				queue<pair<int,int>> q;
				vis[i.first]=true;
				q.push(i.first);
				p.pb(i.first);
				while(!q.empty()){
					auto a=q.front();
					q.pop();
					for(auto j:g[a]){
						if(!vis[j]){
							vis[j]=true;
							q.push(j);
							p.pb(j);
						}
					}
				}
				con.pb(p);
			}
		}

		ll ans=1;
		for (int i = 0; i < con.size(); ++i)
		{
			ans=(ans*factorial(con[i].size()))%mod;
		}
		
		cout<<ans<<endl;

	}
	return 0;
}