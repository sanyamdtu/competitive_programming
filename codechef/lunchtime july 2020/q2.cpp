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
			int n,m,x,y;
		    ll ans=0;
			cin>>n>>m>>x>>y;
			if(n==1&&m==1)
				ans=x;
	        if(ans==0&&(x<=(y/2))){
				ans=(n*m*x);
			}
			if(ans==0){
				if(n%2==0||m%2==0){
					ans=n*m*y;
					ans/=2;
				}
				else {
					if(x<y){
						ans=y*(n-1)*m;
						ans/=2;
						ans+=((m-1)*y)/2;
						ans+=x;
					}
					else{
						ans=y*(n-1)*m;
						ans/=2;
						ans+=((m-1)*y)/2;
						ans+=y;
					}
				}
			}
			if(x==0||y==0)
				ans=0;
			cout<<ans<<endl;
		}
		return 0;
	}