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
		int n,k;
		cin>>n>>k;
		int arr[n];
		int beg=0,last=0,ans=INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			beg=max(beg,arr[i]);
			last+=arr[i];
		}
		sort(arr,arr+n);
		while(beg<=last){
			int mid=(beg+last)/2;
			// cout<<mid<<endl;
			int a=0,curr=0,i=n-1;
			while(i>=0){
				if(curr+arr[i]>mid)
				{
					curr=arr[i];
					a++;
				}
				else {
					curr+=arr[i];
				}
				i--;
			}
			if(a==k)
			{
				ans=min(mid,ans);
				last=mid-1;
			}
			else if(a>k)
				beg=mid+1;
			else
				last=mid-1;
		}
		int curr=INT_MAX;
		vector<vector<<int>> res;
		for (int i = n-1; i >=0 ; --i)
		{
			
			if(curr+arr[i]>ans){
				
				res.pb(v);
				vector<int> v;
				v.pb(arr[i]);
				curr=arr[i];
			}
			v.pb(arr[i]);
			curr+=arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if(curr+arr[i]>ans){
				cout<<"/ ";
			}
			cout<<arr[i]<<" ";
			curr+=arr[i];
		}
		cout<<endl;
	}
	return 0;
}