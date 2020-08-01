#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class graph{
	unordered_map<string,list<pair<string,int>>> m;
public:
	
	void addedge(string a,string b,int di,bool bi){
		m[a].pb({b,di});
		if(bi)
			m[b].pb({a,di});
	}
	void print(){
		for(auto p:m){
			cout<<"node "<<p.first<<" ";
			for(auto i:p.second)
				cout<<i.first<<" "<<i.second<<endl;
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g;	
	g.addedge("sasuke","naruto",-111,true);
	g.addedge("kakashi","naruto",100,false);
	g.addedge("itachi","kakshi",10000,true);
	g.print();
	return 0;
}