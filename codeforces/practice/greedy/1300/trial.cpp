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
		
		ll a,b,c,d,x,y,x1,y1,x2,y2,lx,ly;
		cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
		// cout<<a<<b<<c<<d<<x<<y<<x1<<y1<<x2<<y2;
		lx=x-a+b;
		ly=y-c+d;
		bool f1,f2,f3,f4;
		f1=f2=f3=f4=true;
		if(b>0)
		 f1=(x+1<=x2);
		if(a>0)
		 f2=(x-1>=x1);
	    if(d>0)
		 f3=(y+1<=y2);
	    if(c<0)
		 f4=(y-1>=y1);
         // cout<<f1<<f2<<f3<<f4;	     
		if(lx>=x1&&lx<=x2&&ly>=y1&&ly<=y2&&f1&&f2&&f3&&f4)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<endl;
	}
	return 0;
}