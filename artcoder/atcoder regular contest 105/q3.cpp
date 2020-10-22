#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		int w[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>w[i];
		}
		sort(w,w+n);
		int l[m],v[m];
		for (int i = 0; i < m; ++i)
		{
			cin>>l[i]>>v[i];
		}
		ll beg=0,last=1000000000;
		int arr[n];
		
	}
	return 0;
}