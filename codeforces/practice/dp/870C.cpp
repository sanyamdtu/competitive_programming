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
		if(n==1||n==2||n==3||n==5||n==7||n==11)
			cout<<-1<<endl;
		else{
			
			ll ans=n/4;
			int rem=n%4;
			if(rem==3||rem==1)
				ans--;
			cout<<ans<<endl;
		}
	}
	return 0;
}