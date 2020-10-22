#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353 
#define INF 1e18
typedef  long long ll;
struct node
{
	ll l,r;
};
bool comp(node p,node q){
	if(p.l!=q.l)
		return p.l<q.l;
	else if(p.l==q.l)
		return p.r<q.r;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// ll t;
	// cin >> t;
	// while (t--)
	// {
		ll n,k;
		cin>>n>>k;
		node arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i].l>>arr[i].r;
		}
		sort(arr,arr+n,comp);
		int mini[n],maxi[n];
		for (ll i = 0; i < n; ++i)
		{
			// cout<<arr[i].l<<" "<<arr[i].r<<endl;
		}
		ll res=0;
		for (ll i = 0; i < n; ++i)
		{
			ll beg=i,last=n-1,ans=-1;
			while(beg<=last){
				ll mid=(beg+last)/2;
				if(arr[mid].l<=arr[i].r){
					ans=max(mid,ans);
					beg=mid+1;
				}
				else
					last=mid-1;
			}
			if(i+k-1<=ans)
			{
				ll a=(ans-i);
				res=(res+((a*(a-1))/2))%mod;
				cout<<a<<" "<<i<<" "<<res<<endl;
			}
		}
		cout<<res<<endl;
	// }
	return 0;
}