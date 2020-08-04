#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
map<pair<int,int>,pair<int,int>> edge;
class graph
{
	map<int,list<int>> m;
	public:
		void addedge(int x,int y){
			m[x].pb(y);
			m[y].pb(x);
		}
		void dijkstra(int src){
			map<int,int> dis;
			for(auto i:m){
				dis[i.first]=INT_MAX;
			}
			dis[src]=0;
			set<pair<int,int>> s;
			s.insert({0,src});
			while(!s.empty()){
			    
			    for(auto i:s){
			        cout<<i.first<<" "<<i.second<<" s ";
			    }
			    cout<<endl;
				auto f=*(s.begin());
				s.erase(s.begin());
				int nodedist=f.first;
				int node=f.second;
				for(auto i:m[node]){ 
				    	
					int newd=nodedist+edge[{node,i}].first;
				
					if(dis[i]>newd){
						auto p=s.find({dis[i],i});
						if(p!=s.end())
							s.erase(p);
						s.insert({newd,i});
						dis[i]=newd;
					}
				}
			}
		}
		int icpc(int src,int dest){
			
		}

};
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,ne;
	cin>>n>>ne;
	graph g;
	for (int i = 0; i < ne; ++i)
	{
		int x,y,t,f;
		cin>>x>>y>>t>>f;
		g.addedge(x,y);
		edge[{x,y}]={t,f};
	}
	g.dijkstra(1);
	return 0;
}