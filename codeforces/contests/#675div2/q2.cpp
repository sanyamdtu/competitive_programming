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
		ll n,m;
		cin>>n>>m;
		ll arr[n][m];
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < m; ++j)
			{
				cin>>arr[i][j];
			}
		}
		ll ans=0;
		for (ll i = 0; i < (n+1)/2; ++i)
		{
			for (ll j = 0; j <(m+1)/2; ++j)
			{
				ll sum=(arr[i][j]+arr[n-i-1][j]+arr[i][m -j-1]+arr[n-i-1][m-j-1]);
				ll res=(sum)/4;
				ll f=(arr[i][j]>res)+(res<arr[n-i-1][j])+(arr[i][m -j-1]>res)+(arr[n-i-1][m-j-1]>res);
				if(f==3)
					res++;
				ll u=(arr[i][j]<res)+(res>arr[n-i-1][j])+(arr[i][m -j-1]<res)+(arr[n-i-1][m-j-1]<res);
				if(u==3)
					res--;
				if(n-i-1==i&&m-j-1==j){
					ans=ans;
				}
				else if(n-i-1==i||m-j-1==j){
						ans+=abs(res-arr[i][m-j-1]);
						ans+=abs(res-arr[n-i-1][j]);
				}
				else
				{
					ans+=abs(res-arr[i][j]);
					ans+=abs(res-arr[n-i-1][j]);
					ans+=abs(res-arr[i][m-j-1]);
					ans+=abs(res-arr[n-i-1][m-j-1]);
				}	
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}