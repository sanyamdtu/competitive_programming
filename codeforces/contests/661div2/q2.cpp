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
		int n;
		cin>>n;
		ll a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		ll a1=a[0],b1=b[0];
		for (int i = 1; i < n; ++i)
		{
			a1=min(a1,a[i]);
			b1=min(b1,b[i]);
		}
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			ans+=max(a[i]-a1,b[i]-b1);
		}
		cout<<ans<<endl;
	}
	return 0;
}