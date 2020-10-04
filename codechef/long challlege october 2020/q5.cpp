#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct edge{
	ll v1,v2,w;
};
edge o[12750409];
bool comp(edge a ,edge b){
	return a.w<b.w;
}
bool func(ll v,ll pa[]){
	if(pa[v]==v)
		return v;
	return func(pa[v],pa);
}
ll pa[200009];
void krus(edge *in,ll n,ll e){
	sort(in,in+e,comp);	
	for (ll i = 0; i < n; ++i)
	{
		pa[i]=i;
	}
	ll c=0,i=0;
	while(c!=n-1){
		edge curr=in[i];
		ll src=func(curr.v1,pa);
		ll dest =func(curr.v2,pa);
		if(src!=dest){
			o[c]=curr;
			c++;
			pa[src]=dest;
		}
		i++;
	}
	ll ans=0;
	for (ll i = 0; i < n-1; ++i)
	{
		
			ans+=o[i].w;
	}
	cout<<ans<<endl;
}
ll arr[200009][6];
edge in[12750409];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,d;
	cin>>n>>d;
	if(n<=7007){
		ll ne=(n*(n-1))/2;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < d; ++j)
		{
			cin>>arr[i][j];
		}
	}
	
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = i+1; j < n; ++j)
		{
			if(i!=j){
				in[i].v1=i;
				in[i].v2=j;
				in[i].w=0;
				for (ll k = 0; k < d; ++k)
				{
					in[i].w+=abs(arr[i][k]-arr[j][k]);
				}
			}
		}
	}
	krus(in,n,ne);
	}
	else
		cout<<0;
	return 0;
}