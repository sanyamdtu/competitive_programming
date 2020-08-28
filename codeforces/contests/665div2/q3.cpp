#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll gcd(ll a,ll b){
	if(a<b)
		swap(a,b);
	if(a%b==0)
		return  b;
	return gcd(b,a%b);
}
bool comp(ll a,ll b){
	return (a<b);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		ll arr[n],b[n];
		ll mini=INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			b[i]=arr[i];
			// cout<<arr[i]<<" ";
			mini=min(mini,arr[i]);
		}
		ll gc=mini;
		vector<ll> a;
		sort(b,b+n,comp);
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]!=b[i])
				a.pb(arr[i]);
		}
		for (int i = 0; i < a.size(); ++i)
		{
			gc=gcd(a[i],gc);
		}
		// cout<<gc<<" ";
		if(gc%mini==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}