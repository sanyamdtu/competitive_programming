#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct h{
	ll x,y;
};
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,sx,sy;
	cin>>n>>sx>>sy;
	h arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i].x>>arr[i].y;

	}
	int u=0,d=0,r=0,l=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i].y<=sy-1&&sy!=0)
				u++;
		if(arr[i].y>=sy+1)
			d++;
		if(arr[i].x<=sx-1&&sx!=0)
			l++;
		if(arr[i].x>=sx+1)
			r++;
	}
	int ans=max(l,max(r,max(u,d)));
	cout<<ans<<endl;
	if(l==ans)
		cout<<sx-1<<" "<<sy;
	else if(r==ans)
		cout<<sx+1<<" "<<sy;
	else if(d==ans)
		cout<<sx<<" "<<sy+1;
	else 
		cout<<sx<<" "<<sy-1;	
	return 0;
}