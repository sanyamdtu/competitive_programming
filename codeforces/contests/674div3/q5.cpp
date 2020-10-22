#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,a1,a2,a3,b1,b2,b3;
	cin>>n>>a1>>a2>>a3>>b1>>b2>>b3;
	// cout<<n<<a1<<a2<<a3<<b1<<b2<<b3;
	ll res=min(a1,b2)+min(a2,b3)+min(b1,a3);
	 p=min(a1,b3);
	a1-=p;
	b3-=p;
	ll q=min(a2,b1);
	a2-=q;
	b1-=q;
	ll r=min(a3,b2);
	b1-=r;
	a3-=r;
	p=min(a1,b1);
	a1-=p;
	b1-=p;
	p=min(a2,b2);
	a2-=p;
	b2-=p;
	p=min(a3,b3);
	a3-=p;
	b3-=p;
	cout<<a1+a2+a3<<" ";
	cout<<res<<endl;

	return 0;
}