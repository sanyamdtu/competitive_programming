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
		int n,p;
		cin>>n>>p;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int ans=0;
		for (int i = 0,j=n-1; i < j; )
		{
			if(arr[i]+arr[j]==p){
				ans++;
				i++;
				j--;
			}
			else if(arr[i]+arr[j]<p)
				i++;
			else j--;			
		}
		cout<<ans<<endl;;
	}
	return 0;
}