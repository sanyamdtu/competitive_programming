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
		int n;
		cin>>n;
		ll k;
		cin>>k;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll f=0,ans=-1,minm=INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]<k){
				if(k%(arr[i])==0){
					int moves=(k/arr[i]);
					if(minm>moves){
						minm=moves;
						ans=arr[i];
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}