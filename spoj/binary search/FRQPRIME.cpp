#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define MAXI 1000009
typedef  long long ll;
ll prime[MAXI];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	for (ll i = 0; i < MAXI; ++i)
	{
		prime[i]=1;
	}
	for (ll i = 2; i < MAXI; ++i)
	{
		if(prime[i]==1){
			for (ll j = i*2; j < MAXI; j+=i)
			{
				prime[j]=0;
			}
		}
	}
	for (ll i = 2; i < MAXI; ++i)
	{
		prime[i]+=prime[i-1];
	}
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll i=2,j=2;
		while(prime[j]<k&&j<=n){
			j++;
		}
		ll ans=0;
		while(j<=n&&i<=n){
			if(prime[j]-prime[i-1]>=k){
				// cout<<j<<" "<<i<<endl;
				ans+=n-j+1;
				if(i==j)
					j++;
				i++;
				
			}
			else
				j++;
		}
		cout<<ans<<endl;
	}
	return 0;
}