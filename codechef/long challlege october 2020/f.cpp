#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
	ll val,i;
};
bool comp(node a,node b){
	return a.val<b.val;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,d;
	cin>>n>>d;
	ll arr[n][d];
	ll ne=(n*(n-1))/2;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < d; ++j)
		{
			cin>>arr[i][j];
		}
	}
	node a[d+1][n];
	for (ll i = 0; i < n; ++i)
	{
		ll sum=0;
		for (ll j  = 0; j < d; ++j)
		{
			sum+=arr[i][j];
		}
		a[0][i]={sum,i};
		for (ll j = 0; j < d; ++j)
		{
			a[j+1][i]={sum-2*arr[i][j],i};
		}
	}
	for (ll i = 0; i < d+1; ++i)
	{
		sort(a[i],a[i]+n,comp);
	}
	vector<int> v;
	ll ans=0;
	int vis[n];
	for (int i = 0; i < n; ++i)
	{
		vis[i]=0;
	}
	for (ll i = 0; i < d+1; ++i)
	{
		v.pb(a[i][n-1].i);
		v.pb(a[i][0].i);
		cout<<a[i][0].i<<" "<<a[i][n-1].i<<endl;
		if(vis[a[i][n-1].i]!=1&&vis[a[i][0].i]!=1)
			ans+=a[i][n-1].val-a[i][0].val;
		vis[a[i][n-1].i]=1;
		vis[a[i][0].i]=1;
	}	
	sort(v.begin(), v.end());
	for (ll j = 0; j < n; ++j)
	{
		vector<ll> h;
		if(vis[j]==1)
			continue;
		// cout<<j<<" ";
		for(int k=0;k<v.size();k++) {
			ll cos1=0;
			for (ll l = 0; l < d; ++l)
			{
				cos1+=abs(arr[j][l]-arr[v[k]][l]);
			}
			h.pb(cos1); 
		}
		sort(h.begin(), h.end());
		if(!h.empty())
			ans+=h.back(); 		
	}		
	cout<<ans<<endl;
	return 0;
}