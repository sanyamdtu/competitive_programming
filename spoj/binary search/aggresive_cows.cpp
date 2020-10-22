#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool func(ll arr[],int k,int c,int n){
	int prev=arr[0],i=1;
	while(i<n&&c!=0){
		if(arr[i]-prev>=k)
		{
			prev=arr[i];
			
			c--;
		}
		i++;
	}
	return c==0;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,c;
		cin>>n>>c;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll beg=0,last=1000000004,ans=0,mid;
		while(beg<=last){
			mid=(beg+last)/2;
			if(func(arr,mid,c-1,n)==true)
			{
				ans=max(ans,mid);
				beg=mid+1;
			}
			else
				last=mid-1;
		}
		// cout<<func(arr,2,c-1,n);
		cout<<ans<<endl;
	}
	return 0;
}