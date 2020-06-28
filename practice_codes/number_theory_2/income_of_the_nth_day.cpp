#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


void multiply(ll m[2][2],ll a[2][2]){
	ll f=(m[0][0]*a[0][0]+m[0][1]*a[1][0])%mod;
	ll s=(m[0][0]*a[0][1]+m[0][1]*a[1][1])%mod;
	ll t=(m[1][0]*a[0][0]+m[1][1]*a[0][1])%mod;
	ll l=(m[0][1]*a[1][0]+m[1][1]*a[1][1])%mod;
	m[0][0]=f;
	m[0][1]=s;
	m[1][0]=t;
	m[1][1]=l;
}

void power(ll M[][2],ll n){
	if(n==0||n==1)
		return ;
	power(M,n/2);
	multiply(M,M);
	ll A[2][2]={{1,1},{1,0}};
	if(n%2==1)
		multiply(M,A);
}


ll fibonacci(ll n){
	if(n==-1)
		return 0;
	ll m[2][2]={{1,1},{1,0}};
	power(m,n);
	return m[0][0];
}


ll modulo(ll a,ll n){
	if(n==0)
		return 1;
	ll b=modulo((a*a)%mod,n/2);
	if(n%2==1)
		b=(b*a)%mod;
	return b;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n,f1,f0;
		cin>>f0>>f1>>n;
		ll a=fibonacci(n-1);
		ll b=fibonacci(n); 
		cout<<a<<" "<<b<<endl;
		ll ans=(modulo(f0,a)*modulo(f1,b))%mod;
		cout<<ans-1<<endl;
		
	}
	return 0;
}