#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class graph
{
	map<int,list<pair<int,int>>> m;
public:
	void addedge(int x,int y,int w){
		m[x].pb({y,w});
		m[y].pb({x,w});
	}
	void printlist(){
		for(auto i:m){
			cout<<i.first<<" ->";
			for(auto j:m[i.first]){
				cout<<"( "<<j.first<<" "<<j.second<<" ),";
			}
			cout<<endl;
		}
	}
	void dijkstra(int src){
		map<int,int> dist;
		for(auto i:m)
			dist[i.first]=INT_MAX;
		dist[src]=0;
		set<pair<int,int>> s;
		s.insert({0,src});
		while(!s.empty()){
			auto i=*(s.begin());
			s.erase(s.begin());
			for(auto j:m[i.second]){
				if(dist[j.first]>j.second+dist[i.second]){
					auto f=s.find({dist[j.first],j.first});
					if(f!=s.end()){
						s.erase(f);
					}
					dist[j.first]=j.second+dist[i.first];
					s.insert({dist[j.first],j.first});
				}
			}
		}
		for(auto i:dist){
			cout<<i.first<<" "<<i.second<<" "<<endl;
		}
	}
};


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,e;
	cin>>n>>e;
	graph g;
	g.addedge(1,2,1);
	g.addedge(1,3,4);
	g.addedge(2,3,1);
	g.addedge(3,4,2);
	g.addedge(1,4,7);
	// g.printlist();
	g.dijkstra(1);
	return 0;
}