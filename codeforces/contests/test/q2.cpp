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
		ll n;
		cin>>n;
		ll maxi=INT_MIN;
		ll i=0;
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
				maxi=max(n/i,maxi);
		if(maxi==INT_MIN)
			maxi=1;
		cout<<maxi<<" "<<n-maxi<<endl;
	}
	return 0;
}