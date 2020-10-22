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
		string s;
		cin>>s;
		int arr[n];
		ll ans=0;
		arr[0]=s[0]-'0';
		cout<<arr[0]<<" ";
		for (int i = 1; i < n; ++i)
		{			
			arr[i]=arr[i-1]+s[i]-'0';
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		for (int i = 0; i < n; ++i)
		{
			int beg=i,last=n-1,q=-1,p=INT_MAX;
			while(beg<=last){
				int mid=(beg+last)/2;
				
				if(arr[mid]==k+arr[i]){
					p=min(p,mid);
					last=mid-1;
				}
				else if(arr[mid]<k+arr[i])
					last=mid-1;
				else
					beg=mid+1;
			}
			beg=i,last=n-1;
			while(beg<=last){
				int mid=(beg+last)/2;
				if(arr[mid]==k+arr[i]){
					q=max(q,mid);
					beg=mid+1;
				}
				else if(arr[mid]<k+arr[i])
					last=mid-1;
				else
					beg=mid+1;
			}
			
			if(p!=INT_MAX&&q!=-1){
				ans+=q-p+1;
			}
			cout<<i<<" "<<p<<" "<<q<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}