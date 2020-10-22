#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll  func(int n,int arr[]){
	if(n==3)
		return arr[0]*arr[2]*arr[1];
	ll ans=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j <n ; ++j)
		{
			ll curr=0;
			for (int k = 0; k <n ; ++k)
			{
				if(k!=i&&k!=j){
					curr+=arr[i]*arr[j]*arr[k];
				}
			}
			ans=min(curr,ans);
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<func(n,arr);
	return 0;
}