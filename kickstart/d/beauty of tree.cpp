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
	for (int l=1;l<=t;l++)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int arr[n];
		int parent[n+1];
		for (int i = 1; i <= n; ++i)
			parent[i]=i;
		for (int i = 1; i < n; ++i)
		{
			cin>>arr[i];
			parent[i+1]=arr[i];
		}
		int vis[n+1];
		int levelds
		stack<int> s;
		memset(vis,0,sizeof(vis));
		for (int i = 1; i <= n; ++i)
		{
			if(visited[i]!=1){
				visited[i]=1;
				int p=parent[i];
				while()
			}
		}		


		cout<<"Case #"<<l<<": "<<count<<endl;
	}
	return 0;
}