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
		string s,ans;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			ans.pb(s[n-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}