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
		ll s,n;
		cin>>n>>s;
		ll ans=0;
		ans+=(n/s);
		if(n%s!=1&&(n%s)!=0)
		 ans+=((n%s)%2==0)?1:2;
		else if(n%s!=0)
		 ans+=1;
		cout<<ans<<endl;
	}
	return 0;
}