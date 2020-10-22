#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll powe(ll a,ll p){
	if(p==0)
		return 1;
	if(p==1)
		return a;
	if(p%2==0)
		return powe(a*a,p/2);
	else
		return a*powe(a*a,p/2);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,x,k;
	cin>>n>>x>>k;
	ll a=x-1;
	ll b=powe(x*x,)
	return 0;
}