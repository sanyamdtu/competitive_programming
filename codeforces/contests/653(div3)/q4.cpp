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
		ll k;
		cin>>n>>k;
		
		ll arr[n];
			map<ll,int> m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]%k]++;
		}
		
		ll count=0;
	
		map<ll,int> ::iterator i = m.begin();
		while(i!=m.end()){
			if(i->first==0){
				;
			}
			else{
				ll ans = (i->second-1)*k + (k - i->first);
				count = max(count, ans);
			}

			i++;
		}
		if(count==0){
			cout<<0<<endl;
			continue;
		}
		else{
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}