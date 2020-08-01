#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define max 10000001
#define INF 1e18
typedef  long long ll; prime[max];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 2; i < max; ++i)
	{
		if(prime[i].empty())
		for (int j = i; j <max ; j+=i)
		{
			prime[j].pb(i);
		}
	}
	int n;
	cin>>n;
	ll arr[n];
	vector<ll> u,d;
	for (int i = 0; i < n; ++i)
	{
			cin>>arr[i];
			ll a=-1,b=-1;
				if(prime[arr[i]].size()>=2){
					for (int k = 0; k <prime[arr[i]].size() ; ++k)
					{
						for (int j = 0; j <prime[arr[i]].size() ; ++j)
						{
							ll p=prime[arr[i]][j];
							ll q=prime[arr[i]][k];
							if(j!=k&&(arr[i]%(p+q))!=0){
								a=p;
								b=q;
								break;
							}
						}
						if(a!=-1&&b!=-1)
							break;
					}
				}
				u.pb(a);
				d.pb(b);
	}
			for (int i = 0; i < u.size(); ++i)
			{
				cout<<u[i]<<" ";
			}
			cout<<endl;
			for (int i = 0; i < d.size(); ++i)
			{
				cout<<d[i]<<" ";
			}
			cout<<endl;
	return 0;
}