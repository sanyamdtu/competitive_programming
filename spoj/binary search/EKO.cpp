#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	ll maxi=-1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		maxi=max(maxi,arr[i]);
	}
	ll beg=0,last=maxi,ans=0;
	while(beg<=last){
		ll mid=(beg+last)/2;

		// cout<<mid<<endl;
		ll w=0;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]>mid)
			w+=arr[i]-mid;
		}
		if(w<m)
			last=mid-1;
		else {
			ans=max(mid,ans);
			beg=mid+1;
		}
	}
	cout<<ans;
	return 0;
}