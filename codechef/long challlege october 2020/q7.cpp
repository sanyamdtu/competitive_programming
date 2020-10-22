 #include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;
ll setBitNumber(ll n) 
{ 
    ll k = (ll)(log2(n)); 
    return (ll)(pow(2, k)); 
} 
ll func(ll arr[],ll n,ll vis[],ll c){
	if(c==1){
		for (int i = 0; i < n; ++i)
		{
			if(vis[i]==0)
				return arr[i];
		}
	}
	if(c==2){
		ll x=-4,y;
		for (ll i = 0; i < n; ++i)
		{
			if(vis[i]==0)
			{
				if(x==-4)
				{
					x=arr[i];
				}
				else
				{
					return setBitNumber(x^arr[i]);
				}
			}
		}
	}
	ll ans=INT_MAX;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = i+1; j < n; ++j)
		{ 
			if(vis[i]==0&&vis[j]==0){
				ll d=arr[i]^arr[j];
				ll x=setBitNumber(d);
				swap(arr[i],x);
				vis[j]=1;
				ans=min(ans,func(arr,n,vis,c-1));
				swap(arr[i],x);
				vis[j]=0;
			}
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	ll sum=0;
	ll vis[n];
	// memset(vis,0,sizeof(vis));
	for (int i = 0; i < n; ++i)
	{
		vis[i]=1;
	}
	int s=0;
	for (int i = 0; i < n; ++i)
	{
		vis[i]=0;
		for (int j = i; j < n; ++j)
		{
			vis[j]=0;
			s+=func(arr,n,vis,j-i+1);
			vis[j]=1;
		}
		vis[i]=1;
	}
	cout<<s;
	return 0;
}
/*
0 0 0
0 1 1
0 2 3
0 3 3
1 1 4
1 2 6
1 3 6
2 2 8
2 3 8
3 3 10  
*/