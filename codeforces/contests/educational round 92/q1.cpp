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
		ll l,r;
		cin>>l>>r;	
		ll x,y;
		if(l*2<=r){
			y=2*l;
			x=l;
		}
		else{
			x=-1;
			y=-1;
		}
		cout<<x<<" "<<y<<endl;
	}

	return 0;
}