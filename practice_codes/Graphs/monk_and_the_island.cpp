#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
			int x,d;
		};
class graph{
	vector<vector<int>> g;
public:
	graph (int n){
		g=vector<vector<int>>(n+1) ;
	}
	void addedge(int x,int y){
		g[x].pb(y);
		g[y].pb(x);
	}
	// void print(){
	// 	for (int i = 0; i < g.size(); ++i)
	// 	{
	// 		cout<<i<< "-> ";
	// 		for (int j = 0; j <g[i].size() ; ++j)
	// 		{
	// 			cout<<g[i][j]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }
	void func(int n){
		bool vis[n+1];
		for (int i = 0; i < n+1; ++i)
		{
			vis[i]=false;
		}
		queue<node> q;
		vis[1]=true;
		q.push({1,0});
		while(!q.empty()){
			node a=q.front();
			q.pop();
			if(a.x==n){
				cout<<a.d<<endl;
				break;
			}
			for(int i=0;i<g[a.x].size();i++){
				if(!vis[g[a.x][i]]){
					q.push({g[a.x][i],a.d+1});
					vis[g[a.x][i]]=true;
				}
			}
		}
	}
};

int main()
{
	 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		
		int n,m;
		cin>>n>>m;
		graph s(n);
		for (int i = 0; i < m; ++i)
		{
			int x,y;
			cin>>x>>y;
			s.addedge(x,y);
		}
		  s.func(n);
		// s.print();
	}
	return 0;
}