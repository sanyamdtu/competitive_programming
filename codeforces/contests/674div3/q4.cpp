#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct src{
	ll sum,i;
};
bool comp(src a,src b){
	if(a.sum==b.sum)
		return a.i<b.i;
	return a.sum<b.sum;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		map<ll,ll> m;
		ll n;
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll suf[n];
		vector<src> v;
		suf[n-1]=arr[n-1];
		v.pb({arr[n-1],n-1});
		for (ll i = n-2; i>=0; --i)
		{
			suf[i]=arr[i]+suf[i+1];
			src s;
			s.sum=suf[i];
			s.i=i;
			v.pb(s);
		}

		ll freq[n];
		for (ll i = 0; i < n; ++i)
		{
			freq[i]=INT_MAX;
		}
		// cout<<endl;
		// for(ll i=0;i<n;i++)
		// 	cout<<suf[i]<<" ";
		// cout<<endl;
		sort(v.begin(), v.end(),comp);
		// for(auto j:v){
		// 	cout<<j.sum<<" "<<j.i<<endl;
		// }
		for (ll i = 0; i <n-1; ++i)
		{
			if(suf[i]==0){
				freq[i]=min(n-1,freq[i]);
			}
			ll beg=0,last=v.size()-1,ans=INT_MAX;
			while(beg<=last){

				ll mid=(beg+last)/2;
				// if(i==1)cout<<mid;
				if(v[mid].sum==suf[i]){
					if(v[mid].i>i){
						ans=min(mid,ans);
						last=mid-1;
					}
					else
						beg=mid+1;
				}
				else if(v[mid].sum>suf[i])
					last=mid-1;
				else
					beg=mid+1;
			}
			if(ans!=INT_MAX)
			freq[i]=min(freq[i],v[ans].i-1);
		}
		ll prev=INT_MAX;
		ll ans=0;
		for (ll i = 0; i < n; ++i)
		{
			// cout<<freq[i]<<" ";
			if(i==prev){
				ans++;
				prev=INT_MAX;
			}
			prev=min(prev,freq[i]);
		}
		cout<<ans<<endl;
	
	return 0;
}