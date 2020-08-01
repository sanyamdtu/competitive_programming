#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
	ll p,g;
	bool flag;
};
ll p[200001],h[200001];
int vis[200001];
node func(int n,int V,ll m,vector<vector<int>> v, ll ha[],ll p[],int vis[]){
    ll a=p[V],gd=0;
    vis[V]=1;
	for (int i = 0; i <v[V].size() ; ++i)
	{
		if(vis[v[V][i]]==0){
			vis[v[V][i]]=1;
			node an=func(n,v[V][i],m,v,ha,p,vis);
			if(!an.flag)
				return {-1,-1,false};
			a+=an.p;
			gd+=an.g;
		}
	}
	if((a+ha[V])%2==0){
		ll x=(ha[V]+a)/2;
		ll y=x-ha[V];
		if(x>=0&&x<=a&&y>=0&&y<=a){
			if(gd<=x)
			return {a,x,true};
		}
	}
	return {-1,-1,false};
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		ll m;
		cin>>n>>m;
		
		for (int i = 1; i < n+1; ++i)
		{
			cin>>p[i];
		}
		for (int i = 1; i < n+1; ++i)
		{
			cin>>h[i];
		}
		vector<vector<int>> g(n+1);
		for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;
			g[x].pb(y);
			g[y].pb(x);
		}
		
		
	for (int i = 1; i < n+1; ++i)
	{
		vis[i]=0;		
	}
		
		if(func(n,1,m,g,h,p,vis).flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;

	}
	return 0;
}