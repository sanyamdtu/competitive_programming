#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

ll modulo(ll a,ll n,ll m){
	if(n==0)
		return 1;
	ll b=((modulo(a,n/2,m)%m)*(modulo(a,n/2,m)%m))%m;
	if(n%2==1)
		return (b*a)%m;
	return b%m;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n,p;
		cin>>n>>p;
		ll product=1;
		for(ll i=n+1;i<=p-1;i++){
			cout<<product<<"endl";
			product=((modulo(i,p-2,p)%p)*(product))%p;
		}
		ll ans=p-product;
		for(int i=p;i<=n;i++){
			ans=((ans%p)*(i%p))%p;
		}
		cout<<ans<<endl;
	}
	return 0;
}