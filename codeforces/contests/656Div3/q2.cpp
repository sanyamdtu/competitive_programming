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
		int arr[2*n];
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		vector<int> v;
		for (int i = 0; i < 2*n; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < 2*n; ++i)
		{
			if(vis[arr[i]]==0){
				vis[arr[i]]=1;
				v.pb(arr[i]);
			}
		}
		for (int i = 0; i < n; ++i){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}