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
		int ans=0;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int f=0,curr=0;
		int i=0;
		while(i<n&&arr[i]==0)
			i++;
		for (; i < n; ++i)
		{
			if(arr[i]==0)
				curr++;
			if(arr[i]==1){
				ans+=curr;
				curr=0;
			}
		}
		cout<<ans<<endl;;
	}
	return 0;
}