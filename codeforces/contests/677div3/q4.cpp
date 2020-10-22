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
		int f=1,x=0;
		cin>>arr[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>arr[i];
			// cout<<(arr[0]!=arr[i]);
			if(arr[0]!=arr[i]){
				f=0;
				x=i;
			}
		}
		vector<int> v[2];
		if(f!=1){
			int a=0;
			for (int i = 1; i < n; ++i)
			{
				if(arr[i]!=arr[a]){
					v[0].pb(a+1);
					v[1].pb(i+1);
				}
				else{
					v[0].pb(x+1);
					v[1].pb(i+1);
				}
				
			}
		}
		if(f==1)
			cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			for (int i = 0; i < n-1; ++i)
			{
				cout<<v[0][i]<<" "<<v[1][i]<<endl;
			}
		}
		


	}
	return 0;
}