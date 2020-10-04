#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n,p,k;
		ll x;
		cin>>n>>x>>p>>k;
		p--;
		k--;
		ll arr[n];
		ll f=0;
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(arr[i]==x)
				f=1;
		}
		sort(arr,arr+n);
		ll ans;
		if(f==0)
		{
			ll idx=-1;
			for (ll i = 0; i < n; ++i)
				if(arr[i]<x)
					idx=max(idx,i);
			if(idx<k)
				idx++;
			if(arr[p]==x)
				ans=1;
			else if(p>=k&&arr[p]<x)
				ans=abs(idx-p)+1;
			else if(p<=k&&arr[p]>x)
				ans=abs(idx-p)+1;
			else
				ans=-1;
		}
		else
		{
			ll maxi=-INF,mini=INF;
			for (ll i = 0; i < n; ++i)
			{
				if(arr[i]==x){
					maxi=max(maxi,i);
					mini=min(mini,i);
				}	
			}
			// cout<<arr[p]<<" "<<x<<" ";
			if(arr[p]==x){
				ans=0;
				// cout<<"pop";
			}
			else if(p>=k&&arr[p]<x)
				ans=abs(mini-p);
			else if(p<=k&&arr[p]>x)
				ans=abs(maxi-p);
			else
				ans=-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}