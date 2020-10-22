#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	int res=0;
	for (int i = 0; i < n; ++i)
	{
		int beg=0,last=m-1,ans=m-1;
		while(beg<=last){
			int mid=(beg+last)/2;
			if(arr[i][mid]<=-1){
				ans=min(ans,mid);
				last=mid-1;
			}
			else
				beg=mid+1;
		}
		// cout<<ans<<endl;
		res+=m-ans;
	}
	cout<<res;
	return 0;
}