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
		ll n,x,m;
		cin>>n>>x>>m;
		ll p,q;
		p=q=x;
		for (int i = 0; i < m; ++i)
		{
			ll l,r;
			cin>>l>>r;
			if(r>=p&&r<=q||l<=q&&l>=p||l<=p&&r>=q){
				q=max(l,max(p,max(r,q)));
				p=min(l,min(p,min(r,q)));
			}
			// cout<<p<<" "<<q<<endl;
		}
		cout<<q-p+1<<endl;		
	}
	return 0;
}