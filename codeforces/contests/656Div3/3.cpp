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
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		bool flag=false;
		int ans=-1;
		for (int i = n-2; i>=0; --i)
		{	
			if(arr[i]<arr[i+1]){
				flag=true;
			}
			else if(flag&&arr[i]>arr[i+1]){
					ans=i;
					break;
			}
		}
		// for (int i = n-2; i>=0; --i)
		// {	
		// 	if(arr[i]<arr[i+1]){
		// 		if(flag){
		// 			ans=min(i,ans);
		// 			break;
		// 		}
		// 		else {
		// 		   flag=true;
		// 	    }
		// 	}
		// }
		if(ans==-1)
			cout<<0;
		else
			cout<<ans+1;
		cout<<endl;
	}
	return 0;
}