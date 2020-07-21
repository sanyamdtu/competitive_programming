#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll s,cost=0;
	int n;
	cin>>n>>s;
	int m=(n+1)/2;
	vector<ll> arr(n);
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	sort(arr.begin(), arr.end());
	if(m!=0) m--;
	cost=abs(arr[m]-s);
	// cout<<
	for (int i = m+1; i < n; ++i)
	{
		if(arr[i]<s)
			cost+=abs(s-arr[i]);
	}
	for (int i = m-1; i >=0; --i)
	{
		if(arr[i]>s)
			cost+=abs(s-arr[i]);
	}
	cout<<cost;
	return 0;
}