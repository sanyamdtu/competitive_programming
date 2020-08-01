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
		m[y].pb(x);
	}
	bool cycle(){
		map<int,bool> vis;
		stack<int> s;
		s.push(1);
		map<int,int> pa;
		pa[1]=-1;
		while(!s.empty()){
			int a=s.top();
			s.pop();
			for(auto i:m[a]){
				if(vis[i]!=0&&pa[a]!=i){
					return true;
				}
				else{
					vis[i]=1;
					pa[i]=a;
					s.push(i);
				}
			}
		}
		return false;
	}
	
};
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g;
	g.addedge(0,1);
	g.addedge(0,3);
	g.addedge(2,3);
	g.addedge(2,4);
    cout<<g.cycle();
	return 0;
}
// https://www.mediafire.com/folder/6biytgdr7369c/CN_DSA_PART_2