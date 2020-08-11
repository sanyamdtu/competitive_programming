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
		sort(arr,arr+n);
		int f=0;
		for (int i = n-1; i>0; --i)
		{
			if(arr[i]-arr[i-1]>1)
				f=1;
		}
		if(f==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}