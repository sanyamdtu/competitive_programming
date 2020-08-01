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
		m[y].pb(x);
	}
	void bfs(int src){
		queue<int> q;
		q.push(src);
		map<int,bool> vis;
		vis[src]=true;
		while(!q.empty()){
			cout<<q.front()<<" ";
			for(auto i:m[q.front()]){
				if(!vis[i]){
						vis[i]=true;
					q.push(i);
				}
			}
			q.pop();
		}
	}
	void dfs(int src){
		stack<int> s;
		s.push(src);
		map<int,bool> v;
		v[src]=true;
		while(!s.empty()){
			cout<<s.top()<<" ";
			int a=s.top();
			s.pop();
			for(auto i:m[a]){
				if(v[i]==false){
					v[i]=true;
					s.push(i);
				}
			}
			
		}
	}
	void sssp(int src){
		queue<int> q;
		map<int,int> vis;
		for(auto i:m){
			vis[i.first]=INT_MAX;
		}
		q.push(src);
		vis[src]=0;
		while(!q.empty()){
			int a=q.front();
			for(auto i:m[a]){
				if(vis[i]==INT_MAX){
					vis[i]=vis[a]+1;
					q.push(i);
				}
			}
			q.pop();
		}
		for(auto i:vis){
			cout<<i.first<<" is at distance "<<i.second<<endl;
		}
	}
	void custombfs( map<int,bool> &vis,int src){
		queue<int> q;
		q.push(src);
		vis[src]=true;
		while(!q.empty()){
			cout<<q.front()<<" ";
			for(auto i:m[q.front()]){
				if(!vis[i]){
						vis[i]=true;
					q.push(i);
				}
			}
			q.pop();
		}
	}
	void connectedcomponents(){
		map<int,bool> vis;
		int count=0;
		for(auto i:m){
			if(!vis[i.first]){
				count++;
				cout<<count<<"->";
				custombfs(vis,i.first);
				cout<<endl;
			}
		}
	}

};


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g;
	g.addedge(1,3);
	g.addedge(2,4);
	g.addedge(2,3);
	g.addedge(4,1);
	g.addedge(1,5);
	g.addedge(1,6);
	g.addedge(7,9);
	g.addedge(10,8);
	g.connectedcomponents();
	return 0;
}