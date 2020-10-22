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
	int a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		int beg=0,last=m-1,ans=-1;
		while(beg<=last){
			int mid=(beg+last)/2;
			if(arr[i][mid]==1)
			{
				ans=max(ans,mid);
				beg=mid+1;
			}
			else{
				last=mid-1;
			}
		}
		a[i]=ans+1;
		b[i]=m-a[i];
	}
	sort(a,a+n,greater<int>());
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}