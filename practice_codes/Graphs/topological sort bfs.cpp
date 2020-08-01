#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

class graph
{
	map<int,list<int>> m;
public:
	void addedge(int x,int y){
		m[x].pb(y);
	}
	void topo(){
		int in[8];
		 memset(in,0,sizeof(in));
		for(auto i:m){
			for(auto itr:i.second)
				in[itr]++;
		}
		queue<int> q;
		list<int> order;
		for (int i = 0; i < 8; ++i)
		{
			if(in[i]==0)
				q.push(i);
		}
		while(!q.empty()){
			int a=q.front();
			q.pop();
			for(auto i:m[a]){
				in[i]--;
				if(in[i]==0)
					q.push(i);
			}
			order.pb(a);
		}
		for(auto i:order)
			cout<<i<<" ";
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
	 g.topo();
	return 0;
}