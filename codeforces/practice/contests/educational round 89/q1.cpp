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
		
		ll a,b;
		cin>>a>>b;
		ll ans=0;
		if(b>a)
			swap(a,b);
		if(a==0||b==0)
			ans=0;
		else if(a>=2*b)
			ans=b;
		else{
			if(a==b){
				ans=(2*a)/3;
			}
			else{
				ans+=(a-b);
				ans+=(2*(2*b-a))/3;
			}
		}
		cout<<ans<<endl;;

	}
	return 0;
}