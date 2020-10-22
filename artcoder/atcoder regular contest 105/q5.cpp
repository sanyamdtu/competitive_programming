#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll arr[1005][1005];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	for (ll l = 1; l <=t; ++l)
	{
		ll n;
		cin>>n;
		ll up[n][n],dn[n][n];
		memset(up,0,sizeof(up));
		memset(dn,0,sizeof(dn));
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < n; ++j)
			{
				cin>>arr[i][j];
				up[i][j]=arr[i][j];
				dn[i][j]=arr[i][j];
			}
		}
		
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < n; ++j)
			{
				if(i==0||j==0){
					if(i!=n-1&&j!=n-1)
						dn[i][j]+=dn[i+1][j+1];
				}
				else if(i==n-1||j==n-1){
					if(i!=0&&j!=0)
					up[i][j]+=up[i-1][j-1];
				}
				else
				{

					dn[i][j]+=dn[i+1][j+1];
					up[i][j]+=up[i-1][j-1];
				}
			}
		}
		ll ans=0;
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < n; ++j)
			{
				// cout<<dn[i][j]<<" ";
				ans=max(ans,max(up[i][j],dn[i][j]));
			}
			// cout<<endl;
		}
		cout<<"Case #"<<l<<": "<<ans<<endl;
	}
	return 0;
}