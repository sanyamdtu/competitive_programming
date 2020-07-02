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
			ll a,b,n,m;
			cin>>a>>b>>n>>m;
			int ans=0;
			if(a+b>=n+m){
				if(min(a,b)<m)
					ans=0;
				else{
					ans=1;
				}
			}	
			else{
				ans=0;
			}		
			if(ans==0)
				cout<<"No";
			else
				cout<<"Yes";
			cout<<endl;
		}
		return 0;
	}