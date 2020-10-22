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
		ll arr[n];
		map<ll,ll> freq;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			int j=0;
			while(arr[i]){
				j++;
				arr[i]=arr[i]/2;
			}
			freq[j]++;
		}
		ll ans=0;
		for(auto i:freq){
				ans+=((i.second)*(i.second-1)/2);
		}
		cout<<ans<<endl;
	}
	return 0;
}