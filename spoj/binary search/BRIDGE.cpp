#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node
{
	int s,e;
};
bool comp(node a ,node b){
	if(a.s==b.s)
		return a.e<b.e;
	return a.s<b.s;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		node arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i].s;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i].e;
		}
		
		sort(arr,arr+n,comp);
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<arr[i].s<<" ";
		// }
		// cout<<endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<arr[i].e<<" ";
		// }
		// cout<<endl;
		int dp[n];
		for (int i = 0; i < n; ++i)
		{
			dp[i]=1;
		}
		int ans=1;
		for (int i = 1; i < n; ++i)
		{
			for (int j = i-1; j >=0; --j)
				{
					if(arr[j].e<=arr[i].e)
						dp[i]=max(dp[i],dp[j]+1);
				}
				ans=max(ans,dp[i]);			
		}
		cout<<ans<<endl;
	}
	return 0;
}