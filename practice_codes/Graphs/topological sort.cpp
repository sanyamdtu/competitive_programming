#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class graph{
	map<int,list<int>> m;
public:
	void addedge(int x,int y){
		m[x].pb(y);
	}
	void dfs(int v,list<int> &order,map<int,bool> &vis) {
	    vis[v] = true;
	    for (int u : m[v]) {
	        if (!vis[u])
	            dfs(u,order,vis);
	    }
	    order.push_front(v);
	}
	void topologicalsort(){
		map<int,bool> vis;
		list<int> order;
		for(auto i:m){
			if(vis[i.first]!=true)
				dfs(i.first,order,vis);
		}
		for(auto i:order)
		cout<<i<<" ";
			
		cout<<endl;
	}
};



int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g;
	g.addedge(0,2);
	g.addedge(0,1);
	g.addedge(2,5);
	g.addedge(1,3);
	g.addedge(3,5);
	g.addedge(3,7);
	g.addedge(5,7);
	g.addedge(1,4);
	g.addedge(4,6);
	g.addedge(6,7);
	 g.topologicalsort();
	return 0;
}