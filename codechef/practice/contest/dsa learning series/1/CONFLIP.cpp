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
		int g;
		cin>>g;
		for (int l = 0; l < g; ++l)
		{
			int i,q;
			ll n;
			cin>>i>>n>>q;	
			ll u=0;
			u=(n)/2;
			if(i==q)
				cout<<(n/2);
			else
				cout<<(n+1)/2;
			cout<<endl;
		}		
	}
	return 0;
}