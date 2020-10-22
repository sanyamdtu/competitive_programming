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
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		// sort(arr,arr+n);
		int beg=0,last=n-1,ans=-1;
		while(beg<=last){
			int mid=(beg+last)/2;
			 // cout<<last;
			if(arr[mid]==mid){
				ans=mid;
			 	break;
			}
			else if(arr[mid]>mid){
				last=mid-1;
			}
			else  if(arr[mid]<mid){
				// cout<<"pop";
				beg=mid+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}