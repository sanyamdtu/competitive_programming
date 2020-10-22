#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	char arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	char ele;
	cin>>ele;
	int beg=0,last=n-1,ans=n;
	while(beg<=last){
		int mid=(beg+last)/2;
		if(arr[mid]>ele)
		{
			ans=min(mid,ans);
			last=mid-1;
		}
		else 
			beg=mid+1;
	}
	if(ans==n)
		ans=0;
	cout<<arr[ans];
	return 0;
}