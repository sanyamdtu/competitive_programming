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
		ll x1,y1,z1,x2,y2,z2,ans=0,tem;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		if(z2>0){
				 tem=min(z2,x1);
				z2-=tem;
				x1-=tem;
				tem=min(z2,z1);
				z2-=tem;
				z1-=tem;
				tem=min(z2,y1);
				z2-=tem;
				y1-=tem;
				ans-=tem*2;
		}
		if(y2>0){
				 tem=min(y2,z1);
				y2-=tem;
				z1-=tem;
				ans+=tem*2;
				 tem=min(y2,x1);
				y2-=tem;
				x1-=tem;
				tem=min(y2,y1);
				y2-=tem;
				y1-=tem;
		}
		if(x2>0){
				 tem=min(x2,x1);
				x2-=tem;
				x1-=tem;
				tem=min(x2,y1);
				x2-=tem;
				y1-=tem;
				tem=min(x2,z1);
				x2-=tem;
				z1-=tem;
		}
		cout<<ans<<endl;
	}
	return 0;
}