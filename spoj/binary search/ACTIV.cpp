#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 100000000
#define INF 1e18
typedef  long long ll;
struct node {
	ll s,e;
};
bool comp(node a,node b){
	if(a.e==b.e)
		return a.s<b.s;
	return a.e<b.e;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	while (1)
	{
		ll n;
		cin>>n;
		if(n==-1)
			break;
		node arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i].s>>arr[i].e;
		}
		sort(arr,arr+n,comp);
		ll dp[n];
		for (ll i = 0; i < n; ++i)
		{
			dp[i]=0;
		}
		dp[0]=1;
		for (ll i = 1; i < n; ++i)
		{
			dp[i]=(dp[i-1]+1)%mod;
			ll beg=0,last=i-1,ans=-1;
			while(beg<=last){
				ll mid=(beg+last)/2;
				if(arr[i].s>=arr[mid].e){
					ans=max(ans,mid);
					beg=mid+1;
				}
				else 
					last=mid-1;
			}
			// cout<<endl;
			if(ans!=-1)
				dp[i]=(dp[ans]+dp[i])%mod;
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<arr[i].s<<" ";
		// }

		// cout<<endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<arr[i].e<<" ";
		// }
		// cout<<endl;
		// for (ll i = 0; i < n; ++i)
		// {
		// 	cout<<dp[i]<<" ";
		// }cout<<endl;
		cout<<setw(8)<<setfill('0')<<dp[n-1]<<endl;
	}
	return 0;
}
