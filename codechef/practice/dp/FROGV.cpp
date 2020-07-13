#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct frog{
	int i;
	ll x;
};
bool comp(frog a ,frog b){
	return a.x<b.x;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,p;
	ll k;
	cin>>n>>k>>p;
	frog arr[n+1];
	for (int i = 1; i <= n; ++i){
		arr[i].i=i;
		cin>>arr[i].x;
	}
	int idx[n+1];
	sort(arr+1,arr+n+1,comp);
	for (int i = 1; i <= n; ++i){
		idx[arr[i].i]=i;
	}
	int dp[n+1];
	dp[1]=1;
	for (int i = 1; i <= n; ++i)
		dp[i]=1;
	for (int i = 2; i <= n; ++i){
		if(arr[i].x-arr[i-1].x<=k)
			dp[i]=dp[i-1];
		else
			dp[i]=i;
	}
	while(p--){
		int a,b;
	    cin>>a>>b;
	    a=idx[a];
	    b=idx[b];
	    int mix=max(a,b);
	    a=min(a,b);
	    b=mix;
	    if(dp[b]<=a)
	    	cout<<"Yes";
	    else 
	    	cout<<"No";
	    cout<<endl;    
	}
	return 0;
}