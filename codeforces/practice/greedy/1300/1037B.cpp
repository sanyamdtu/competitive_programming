#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll s;
	int n;
	cin>>n>>s;
	vector<ll> arr(n);
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	sort(arr.begin(), arr.end());
	auto j=find(arr.begin(), arr.end(),s);
	int f=(j!=arr.end())?j-arr.begin():-1;
	int m=(n+1)/2-1;
	ll cost=0;
	// if(f==-1){
	// 	(s>arr[m])?f=n-1:f=
	// }
	if(m<f){
		for (int i = m; i <=f; ++i)
			cost+=s-arr[i];
	}
	else (m>f)
		for (int i = f; i <= m; ++i)
			cost+=arr[i]-s;
	cout<<cost;
	return 0;
}