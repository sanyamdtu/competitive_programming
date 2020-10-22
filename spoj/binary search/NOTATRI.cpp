#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			ll a=arr[i];
			for (int j = 0,k=n-1; j <k; )
			{
				if(arr[j]+arr[k]>=a) {
					k--;
				}
				else {
					ll res=(k-j);
					if(i<=k&&j<=i)
						res--;
					ans+=res;
					j++;
				}
			}
		}
		cout<<endl<<ans;
	}

	return 0;
}