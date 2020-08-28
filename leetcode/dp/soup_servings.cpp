#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
double func(ll a, ll b){
	if(a+b<100||a==0){
		if(a==0||(a==0&&b==0))
			return 1;
		return 0;
	}
	double ans=0;
	if(a>=100)
		ans=(func(a-100,b));
	if(a>=75 && b>=25)
		ans+=func(a-75,b-25);
	if(a>=25 && b>=75)
		ans+=func(a-25,b-75);
	if(a>=50 && b>=50)
		ans+=func(a-50,b-50);
	return ans*(0.25);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		cout<<func(n,n);
	}
	return 0;
}