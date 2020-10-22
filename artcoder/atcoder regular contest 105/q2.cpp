#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	// cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		vector<ll> c;
		for (int i = 0; i < n; ++i)
		{
			int d;
			cin>>d;
			c.pb(d);
		}
		sort(c.begin(), c.end());
		vector<ll> arr;
		arr.pb(c[0]);
		for (int i = 1; i < n; ++i)
		{
			if(c[i]!=c[i-1])
				arr.pb(c[i]);
		}
		ll ans=0;
		while(!arr.empty()){
			ll x=arr[0];
			int i=n-1;
			vector<ll> v;
			map<int,bool> m;
			while(i>0){
				if(arr[i]%x!=0&&!m[arr[i]%x]){
					m[arr[i]%x]=true;
				}
				i--;
				ans+=(arr[i]-1)/x;
			}
			arr.clear();
			if(!m.empty())
			{
				for(auto j:m)
				{
					arr.pb(j.first);
				}
				arr.pb(x);
			}
		}
		cout<<ans;
	}
	return 0;
}