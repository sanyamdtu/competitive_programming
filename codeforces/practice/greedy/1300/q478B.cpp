	#include<bits/stdc++.h>
	using namespace std;
	#define pb  push_back

	#define mod 1000000007
	#define INF 1e18
	typedef  long long ll;

	int main()
	{
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		
			ll n,m;
			cin>>n>>m;
			ll mini=0,maxi=0;
			mini+=((n/m)*((n/m)-1))/2;
			mini=mini*m;
			mini+=(n/m)*(n%m);
			ll temp=n-m+1;
			maxi=(temp*(temp-1))/2;
			cout<<mini<<" "<<maxi;
		
		return 0;
	}