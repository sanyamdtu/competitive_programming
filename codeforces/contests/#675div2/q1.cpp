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
		ll a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		ll x=((a[2]-a[1]-a[0])+(a[1]+a[2]+a[0]))/2;
		cout<<x<<endl;
		
	}
	return 0;
}