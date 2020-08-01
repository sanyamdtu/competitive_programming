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
		ll k;
		cin>>n>>k;
	    ll d[n];
	    string ans;
		for (int i = 0; i < n; ++i)
		{
			cin>>d[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if(d[i]%k==0)
				ans+='1';
			else 
				ans+='0';
		}
		cout<<ans<<endl;
	}
	return 0;
}