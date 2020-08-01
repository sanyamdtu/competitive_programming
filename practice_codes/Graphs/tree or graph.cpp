#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class graph
{
	map<int, list<int>> m;
public:
	void addedge(int x ,int y){
		m[x].pb(y);
		m[y].pb(x);
	}
	bool tree(){
		map<int,bool> vis;
		map<int,int> par;
		queue<int> q;
		q.push(0);
		vis[0]=true;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			for(auto i:m[a]){
				if(vis[i]&&par[a]!=i){
					return false;
				}
				else if(vis[i]!=true){
					vis[i]=true;
					par[i]=a;
					q.push(i);
				}
			}
		}
		return true;
	}
	
};
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g;
	g.addedge(0,1);
	g.addedge(2,3);
	g.addedge(2,1);
	g.addedge(0,3);
		if(g.tree())
			cout<<"tree";
		else
			cout<<"not tree";
	return 0;
}