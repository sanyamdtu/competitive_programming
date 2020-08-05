#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

class graph {
	map<int,list<int>> m;
public:
	void addedge(int x,int y){
		m[x].pb(y);
		m[y].pb(x);
	}
	void connected(int n,int p[],int q[]){
		vector<vector<int>> con;
		map<int,bool> vis;
		for(auto i:m){
			if(!vis[i.first]){
				vector<int> one;
				queue<int> q;
				vis[i.first]=true;
				q.push(i.first);
				while(!q.empty()){
					int a=q.front();
					one.pb(a);
					q.pop();
					for(auto j:m[a]){
						if(!vis[j])
						{
							q.push(j);
							vis[j]=true;
						}
					}
				}  
				con.pb(one);
			}
		}
		int f=1;
		for (int i = 0; i < con.size(); ++i)
		{
			map<int,bool> che;
			for (int j = 0; j < con[i].size(); ++j)
			{
				 che[p[con[i][j]-1]]=true;
			}
			for (int j = 0; j < con[i].size(); ++j)
			{
				if(!che[q[con[i][j]-1]])
					f=0;
			}
		}
		if(f==0)
			cout<<"NO";
		else
			cout<<"YES";
        cout<<endl;
	}

	
};



int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		graph g;
		int n,m;
		cin>>n>>m;
		int p[n],q[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i];
			g.addedge(i+1,i+1);
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>q[i];
		}
		for (int i = 0; i < m; ++i)
		{
			int a,b;
			cin>>a>>b;
			g.addedge(a,b);
		}
		g.connected(n,p,q);
	}
	return 0;
}