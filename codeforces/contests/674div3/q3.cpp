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
		ll ans=INT_MAX;
		ll i=1;
		while(i<=sqrt(n)+1){
			ll curr=(n-i)/i;
			if((n-i)%i!=0){
				curr++;
			}
			ans=min(ans,curr+i-1);
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}