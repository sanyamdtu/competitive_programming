#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll x,y,n;
		cin>>x>>y>>n;
		ll rem=n%x;
		ll ans=0;
		if(rem==y)
			ans=n;
		else if(rem>y){
			ans=n-(rem)+y;
		}		
		else {
			ans=n-rem-x+y;
		}
		cout<<ans<<endl;
	}
	return 0;
}